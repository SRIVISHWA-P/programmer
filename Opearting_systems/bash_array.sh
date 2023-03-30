#! /bin/bash

declare -a array
echo "Enter the n value : "
read n

for (( i=0; i<$n; i++ ))
do
  echo "Enter a number : "
  read array[$i]
done

small=${array[0]}
large=${array[0]}
sum=0

for i in "${array[@]}"
do 
(( sum=sum+"$i" ))  #calculating sum


if [[ "$i" -lt "$small" ]]   #smaller element
then
	small="$i"
fi

if [[ "$i" -gt "$large" ]]   #greater element
then
	large="$i"
fi

	
done

echo "The smallest element in the array is $small"
echo "The largest element in the array is $large"
echo "The sum of all elements in the array is $sum"
