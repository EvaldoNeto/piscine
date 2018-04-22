#!/bin/bash
#FT_NBR1='\"\"!\"\"!\"\"!\"\"!\"\'
#FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo

var=rcrdmddd
var=$FT_NBR2
#Converting var to base5 (var1)
var1=`echo $var | sed -e 's/m/0/g' | sed -e 's/r/1/g' | sed -e 's/d/2/g' | sed -e 's/o/3/g' | sed -e 's/c/4/g'`

size=${#var}
 
declare -i var_b10
var_b10=0
i=0
a=$size
aux_5=1

echo $var1
#Converting var1 to base 10 (var_b10)
while [ $a -gt 0 ]
do
    aux=`echo $var1 | cut -c $a`
    aux=`expr $aux "*" $aux_5`
    var_b10=`expr $var_b10 + $aux`
    echo $var_b10
    if [ $i -lt $size ]
    then
	aux_5=`expr $aux_5 "*" 5`
	i=`expr $i + 1`
    fi
    a=`expr $a - 1`
done

var2='\A?"\"A\'
#Changin A with '
var2=`echo $var2 | sed -e "s/A/'/g"`
var2=$FT_NBR1
#Converting var2 to base5 (var3)
echo $var2 | sed -e 's/\\/1/g' | sed -e 's/?/3/g' | sed -e 's/"/2/g' | sed -e 's/!/4/g' | sed -e "s/'/0/g" > temp.txt
var3=`cat temp.txt`
rm temp.txt

#Converting var3 to base 10 (var_b10)
size2=${#var2}
var2_b10=0
i=0
a=$size2
aux_5=1

while [ $a -gt 0 ]
do
    aux=`echo $var3 | cut -c $a`
    aux=`expr $aux "*" $aux_5`
    var2_b10=`expr $var2_b10 + $aux`
    if [ $i -lt $size2 ]
    then
        aux_5=`expr $aux_5 "*" 5`
	i=`expr $i + 1`
    fi
    a=`expr $a - 1`
done


#Obtain the sum in the base 10
sum_b10=`expr $var_b10 + $var2_b10`
echo $sum_b10

div=$sum_b10
res_b13=""

while [ $div -gt 0 ]
do
    temp1=`expr $div "%" 13`
    temp2=`expr $div "/" 13`
    if [ $temp1 == 10 ]
    then
	temp1='A'
    elif [ $temp1 == 11 ]
    then
	temp1='B'
    elif [ $temp1 == 12 ]
    then
	temp1='C'
    fi	
    div=$temp2
    res_b13="$temp1$res_b13"    
done

echo $res_b13 | sed -e 's/0/g/g' | sed -e 's/1/t/g' | sed -e 's/2/a/g' | sed -e 's/3/i/g' | sed -e 's/4/o/g' | sed -e 's/5/ /g' | sed -e 's/6/l/g' | sed -e 's/7/u/g' | sed -e 's/8/S/g' | sed -e 's/9/n/g' | sed -e 's/A/e/g' | sed -e 's/B/m/g' | sed -e 's/C/f/g'