#include<stdio.h>
#include<iostream>
using namespace std;
int a[10][10];  // ���̴�С  9*9 ;
int x[8] = { 1,1,1,-1,-1,-1,0,0 };
int y[8] = { 1,-1,0,1,-1,0,-1,1 }; // ����
bool Player(int x, int y) { //   ����Ƿ�����ҵ��Ӳ����ж��Ƿ�Ϸ�
    if (x >= 1 && x <= 9 && y >= 1 && y <= 9 && a[x][y] == 1) return 1;
    return 0;
}
bool calcAgent(int x, int y) { //   ����Ƿ��ǵ��Ե��Ӳ����ж��Ƿ�Ϸ�
    if (x >= 1 && x <= 9 && y >= 1 && y <= 9 && a[x][y] == 2) return 1;
    return 0;
}
int check1(int number) { //  ��������Ƿ񼸸�һ��
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
int check2(int number) {  //  ��������Ƿ�number��һ��
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
int check11(int number) {   // ����Ƿ� *oooo*   ���ظ���
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
int check21(int number) {   // �����Ƿ� o****o  �м�number ��* ���ظ���
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

void solve(int x, int y) {  // ��������   // �ȹ��� �ٷ���  // �������Ƿ���� ����
    long long b[10][10]; // �ú�����ֵ���ж��������ĸ�λ��.
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
    // ��������
    for (int i = 1; i <= 9; i++) {  // �����Լ��Ƿ���������Ӯ��
        for (int j = 1; j <= 9; j++) {
            if (a[i][j]) continue;
            a[i][j] = 2; 
            if (check2(5)) 
            {
                a[i][j] = 2;
                cout << " ����ͣ��λ�� " << i << " " << j << endl; 
                /* cout<<" �ܹ�ֱ��Ӯ "<<endl; */
                return; 
            }
            a[i][j] = 0;
        }
    }

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (a[i][j]) continue;
            int num1, num2;
            num1 = check2(4); a[i][j] = 2;    num2 = check2(4);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 1000000000;// **** // �����Լ��Ƿ�4��һ��
            num1 = check21(4); a[i][j] = 2;    num2 = check21(4);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 1000000000;//  -++++-
            num1 = check2(3); a[i][j] = 2;    num2 = check2(3);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 10000000; // *** // �����Լ��Ƿ�3��һ��
            num1 = check21(3); a[i][j] = 2;    num2 = check21(3);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 10000000;//  -+++-
            num1 = check2(2); a[i][j] = 2;    num2 = check2(3);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 100000; // ** // �����Լ��Ƿ�����һ��
            num1 = check21(2); a[i][j] = 2;    num2 = check21(2);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 100000;//  -++-
        }
    }
    // ����  
    for (int i = 1; i <= 9; i++) {  // ��������Ƿ���������Ӯ��
        for (int j = 1; j <= 9; j++) {
            if (a[i][j]) continue;
            a[i][j] = 1;  if (check1(5)) { a[i][j] = 2;  cout << " ����ͣ��λ�� " << i << " " << j << endl; return; }   a[i][j] = 0;          // ooooo
        }
    }
    // ��������
    for (int i = 1; i <= 9; i++) {  // ��������Ƿ�4��һ��
        for (int j = 1; j <= 9; j++) {
            if (a[i][j]) continue;
            int num1, num2;
            num1 = check1(4); a[i][j] = 1;    num2 = check1(4);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 100000000; // **** // �����Լ��Ƿ�4��һ��
            num1 = check11(4); a[i][j] = 1;    num2 = check11(4);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 100000000;//  -++++-
            num1 = check1(3); a[i][j] = 1;    num2 = check1(3);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 1000000; // *** // �����Լ��Ƿ�3��һ��
            num1 = check11(3); a[i][j] = 1;    num2 = check11(3);      a[i][j] = 0;  b[i][j] -= (num2 - num1) * 1000000;//  -+++-
            num1 = check1(2); a[i][j] = 1;    num2 = check1(3);       a[i][j] = 0;  b[i][j] += (num2 - num1) * 10000; // ** // �����Լ��Ƿ�����һ��
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
    cout << " ����ͣ��λ�� " << aa << " " << bb << endl;
    a[aa][bb] = 2; return;
}
void show() {
    cout << "  ";
    for (int i = 1; i <= 9; i++) { cout << i << " "; } cout << endl;
    for (int i = 1; i <= 9; i++) {
        cout << i << " ";
        for (int j = 1; j <= 9; j++) {
            if (a[i][j] == 0) cout << ". ";
            if (a[i][j] == 1) cout << "o "; // ���
            if (a[i][j] == 2) cout << "* "; // ����
        }cout << endl;
    }cout << endl;
}
int main() {
    cout << " �˻��Կ����� ������� " << endl;
    show();
    while (1) {
        cout << "-------------------" << endl;
        int x, y;
        while (1) {
            cout << " ���ͣ��λ�� ";
            cin >> x >> y;
            if (a[x][y] || x > 9 || x <= 0 || y > 9 || y <= 0) { cout << " ��λ���ѱ�ռ�� ���������� " << endl; }
            else { break; }
        }
        a[x][y] = 1;
        bool k = 0; k = check1(5); 
        if (k)
        { 
        show(); 
        cout << " ���ʤ��  ��Ϸ���� " << endl; 
        break; 
        }
        solve(x, y);
        k = check2(5);  
        if (k) 
        { 
            show(); 
            cout << " ����ʤ��  ��Ϸ���� " << endl; 
            break; 
        }
        show();
    }
}