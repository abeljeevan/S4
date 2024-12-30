echo "Enter a number"
read num
a=$num
rev=0
while [ $a -gt 0 ];
do
	x=$(($num % 10))
	rev=$(($rev*10 + $x))
	a=$(($a/10))
done
if [ $rev -eq $num ]
then 
echo "number is paliendrome"
else
echo "number is not a paliendrome"
fi
