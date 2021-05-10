#include<stdio.h>
#include<iostream>
using namespace std;
int a[10][10];  // 棋盘大小  9*9 ;
int x[8] = { 1,1,1,-1,-1,-1,0,0 };
int y[8] = { 1,-1,0,1,-1,0,-1,1 }; // 方向
bool Player(int x, int y) { //   检测是否是玩家的子并且判断是否合法
    if (x >= 1 && x <= 9 && y >= 1 && y <= 9 && a[x][y] == 1) return 1;
    return 0;
}
bool calcAgent(int x, int y) { //   检测是否是电脑的子并且判断是否合法
    if (x >= 1 && x <= 9 && y >= 1 && y <= 9 && a[x][y] == 2) return 1;
    return 0;
}
int check1(int number) { //  检验玩家是否几个一排
    int w = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int pos = 0; pos < 8; pos++) {
                int c = 0;
                for (int k = 0; k < number; k++) 
                {
                    if (Player(i + k * x[pos], j + k * y[pos]))
                        c++;
                }
                if (c == number) w++;
            }
        }
    }
    return w;
}
int check2(int number) {  //  检验电脑是否number个一排
    int w = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int pos = 0; pos < 8; pos++) {
                int c = 0;
                for (int k = 0; k < number; k++) {
                    if (calcAgent(i + k * x[pos], j + k * y[pos])) c++;
                }
                if (c == number) w++;
            }
        }
    }
    return w;
}
int check11(int number) {   // 玩家是否 *oooo*   返回个数
    int w = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int pos = 0; pos < 8; pos++) {
                int c = 0;
                for (int k = 1; k <= number; k++) {
                    if (Player(i + k * x[pos], j + k * y[pos])) c++;
                }
                if (c == number && calcAgent(i, j) && calcAgent(i + (number + 1) * x[pos], j + (number + 1) * y[pos])) w++;
            }
        }
    } return w;
}
int check21(int number) {   // 电脑是否 o****o  中间number 个* 返回个数
    int w = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int pos = 0; pos < 8; pos++) {
                int c = 0;
                for (int k = 1; k <= number; k++) {
                    if (calcAgent(i + k * x[pos], j + k * y[pos])) c++;
                }
                if (c == 4 && Player(i, j) && Player(i + (number + 1) * x[pos], j + (number + 1) * y[pos])) w++;
            }
        }
    }
    return w;
}

void solve(int x, int y) {  // 评估函数   // 先攻击 再防守  // 后评估是否进攻 防御
    long long b[10][10]; // 用函数的值来判定电脑填哪个位置.
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            b[i][j] = 5 - fabs(5 - i) + 5 - fabs(5 - j);
        }
    }
    cout << "  ";
    for (int i = 1; i <= 9; i++) { cout << i << " "; } cout << endl;
    for (int i = 1; i <= 9; i++) {
        cout << i << " ";
        for (int j = 1; j <= 9; j++) {
            cout << b[i][j] << " ";
        }cout << endl;
    }cout << endl;
    // 攻击评分
    for (int i = 1; i <= 9; i++) {  // 检验自己是否下这个点就赢了
        for (int j = 1; j <= 9; j++) {
            if (a[i][j]) continue;
            a[i][j] = 2; 
            if (check2(5)) 
            {
                a[i][j] = 2;
                cout << " 电脑停放位置 " << i << " " << j << endl; 
                /* cout<<" 能够直接赢 "<<endl; */
                return; 
            }
            a[i][j] = 0;
        }
    }

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (a[i][j]) continue;
            int num1, num2;
            num1 = check2(4); a[i][j] = 2;    num2 = check2(4);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 1000000000;// **** // 检验自己是否4个一串
            num1 = check21(4); a[i][j] = 2;    num2 = check21(4);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 1000000000;//  -++++-
            num1 = check2(3); a[i][j] = 2;    num2 = check2(3);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 10000000; // *** // 检验自己是否3个一串
            num1 = check21(3); a[i][j] = 2;    num2 = check21(3);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 10000000;//  -+++-
            num1 = check2(2); a[i][j] = 2;    num2 = check2(3);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 100000; // ** // 检验自己是否两个一串
            num1 = check21(2); a[i][j] = 2;    num2 = check21(2);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 100000;//  -++-
        }
    }
    // 防守  
    for (int i = 1; i <= 9; i++) {  // 检验对手是否下这个点就赢了
        for (int j = 1; j <= 9; j++) {
            if (a[i][j]) continue;
            a[i][j] = 1;  if (check1(5)) { a[i][j] = 2;  cout << " 电脑停放位置 " << i << " " << j << endl; return; }   a[i][j] = 0;          // ooooo
        }
    }
    // 防守评分
    for (int i = 1; i <= 9; i++) {  // 检验对手是否4个一串
        for (int j = 1; j <= 9; j++) {
            if (a[i][j]) continue;
            int num1, num2;
            num1 = check1(4); a[i][j] = 1;    num2 = check1(4);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 100000000; // **** // 检验自己是否4个一串
            num1 = check11(4); a[i][j] = 1;    num2 = check11(4);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 100000000;//  -++++-
            num1 = check1(3); a[i][j] = 1;    num2 = check1(3);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 1000000; // *** // 检验自己是否3个一串
            num1 = check11(3); a[i][j] = 1;    num2 = check11(3);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 1000000;//  -+++-
            num1 = check1(2); a[i][j] = 1;    num2 = check1(3);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 10000; // ** // 检验自己是否两个一串
            num1 = check11(2); a[i][j] = 1;    num2 = check11(2);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 10000;//  -++-
        }
    }
    int num = 0;
    int aa, bb;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (a[i][j] == 0 && b[i][j] > num) {
                num = b[i][j];
                aa = i;
                bb = j;
            }
        }
    }
    cout << " 电脑停放位置 " << aa << " " << bb << endl;
    a[aa][bb] = 2; return;
}
void show() {
    cout << "  ";
    for (int i = 1; i <= 9; i++) { cout << i << " "; } cout << endl;
    for (int i = 1; i <= 9; i++) {
        cout << i << " ";
        for (int j = 1; j <= 9; j++) {
            if (a[i][j] == 0) cout << ". ";
            if (a[i][j] == 1) cout << "o "; // 玩家
            if (a[i][j] == 2) cout << "* "; // 电脑
        }cout << endl;
    }cout << endl;
}
int main() {
    cout << " 人机对抗博弈 玩家先手 " << endl;
    show();
    while (1) {
        cout << "-------------------" << endl;
        int x, y;
        while (1) {
            cout << " 玩家停放位置 ";
            cin >> x >> y;
            if (a[x][y] || x > 9 || x <= 0 || y > 9 || y <= 0) { cout << " 此位置已被占领 请重新输入 " << endl; }
            else { break; }
        }
        a[x][y] = 1;
        bool k = 0; k = check1(5); 
        if (k)
        { 
        show(); 
        cout << " 玩家胜利  游戏结束 " << endl; 
        break; 
        }
        solve(x, y);
        k = check2(5);  
        if (k) 
        { 
            show(); 
            cout << " 电脑胜利  游戏结束 " << endl; 
            break; 
        }
        show();
    }
}