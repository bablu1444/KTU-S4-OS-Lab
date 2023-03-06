echo "Enter option: 1.Date 2.Mnth"
read n 
case $n in 
1)
currentdate= 'date'
;;
2)
echo `cal 02 2023`
;;
*)echo  "Wrong option"
esac
