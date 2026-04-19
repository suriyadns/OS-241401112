#!/bin/bash
# Shell script for Arithmetic operations using expr
echo "Enter two numbers (space separated):"
read a b [cite: 115]

add=`expr $a + $b` [cite: 116]
sub=`expr $a - $b` [cite: 117]
mult=`expr $a \* $b` [cite: 118]
div=`expr $a / $b` [cite: 119]

echo "Addition: $add" [cite: 120]
echo "Subtraction: $sub" [cite: 121]
echo "Multiplication: $mult" [cite: 122]
echo "Division: $div" [cite: 123]
