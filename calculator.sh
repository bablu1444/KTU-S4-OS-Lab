echo "Calculator"
echo "Enter two numbers"
read a
read b
echo "Enter the option, 1.sum 2.subtract 3.multiply 4.divide 5.remainder"
read opt
case $opt in
1)
sum = `expr $a + $b`
echo " Sum is $sum"
;;
2)
diff =`expr $a - $b`
echo "Diffrence is  $diff"
;;
3)
mul = `expr $a \* $b`
echo " Product is $mul"
;;
4)
div = `expr $a / $b`
echo " Division is $div"
;;
5)
mod = `expr $a % $b`
echo " Remainder is $mod"
;;
*) echo "Not a valid option"
esac
