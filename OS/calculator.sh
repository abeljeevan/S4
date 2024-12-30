echo "Enter two numbers:"
read n1
read n2
echo "choose an operation:"
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.division"
read ch
case $ch in
1)result=$(($n1 + $n2))
echo "result $n1 + $n2 = $result";;
2)result=$(($n1 - $n2))
echo "result $n1 - $n2 = $result";;
3)result=$(($n1 * $n2))
echo "result $n1 * $n2 = $result";;
4)result=$(($n1 / $n2))
echo "result $n1 / $n2 = $result";;
*)echo "invalid input";;
esac


 

