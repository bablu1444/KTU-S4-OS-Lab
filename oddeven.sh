echo "Enter the number"
read n
a=`expr $n % 2`
if [ $a == 0 ]
then
echo "It is even"
else
echo "It is odd"
fi
