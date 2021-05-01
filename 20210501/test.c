实验2.2
read num1
read num2
read flag
if test $flag = '+'
then
sum = `expr $num1 + $num2`
echo "num1 + num2 = $sum"
elif test $flag = '-'
then
sum = `expr $num1 - $num2`
echo "num1 - num2 = $sum"
elif test $flag = "x"
then
sum = `expr $num1 \ * $num2`
echo "num1 x num2 = $sum"
elif test $flag = '/'
then
if test $num2 = 0
then
echo "num2 is 0"
else
sum = `expr $num1 / $num2`
echo "num1 / num2 = $sum"
fi
fi




实验 3.1
echo "input groupname"
read groupname
groupadd $groupname
echo "input the qulity of the user"
read num
for ((i = 1; i <= $num; i++))
do
echo "please input username"
read name
useradd $name - g $groupname
echo "$name create success"
done

实验3.2
read num
if test $num - gt 90 - a $num - lt 100
then
echo 'A'
elif test $num - gt 80 - a $num - lt 90
then
echo 'B'
elif test $num - gt 70 - a $num - lt 80
then
echo 'C'
elif test $num - gt 60 - a $num - lt 70
then
echo 'D'
elif test $num - lt 60
then
echo 'E'
fi


实验3.3
read num
sum = 0
for ((i = 1; i <= $num; i++))
do
let "sum+=i"
done
for ((i = 1; i < $num; i++))
	do
		echo - n "$i+"
		done
		echo "$num=$sum"