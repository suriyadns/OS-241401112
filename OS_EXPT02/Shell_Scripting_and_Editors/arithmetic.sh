#!/bin/bash
# Arithmetic operations using expr [cite: 112, 114]
echo "Enter two numbers:"
read a b
add=`expr $a + $b`
sub=`expr $a - $b`
mult=`expr $a \* $b`
div=`expr $a / $b`
echo "Addition: $add"
echo "Subtraction: $sub"
echo "Multiplication: $mult"
echo "Division: $div"
