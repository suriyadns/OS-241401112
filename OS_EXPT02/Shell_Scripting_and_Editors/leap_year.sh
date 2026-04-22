#!/bin/bash
# Check if a year is a leap year [cite: 125, 126]
echo "Enter a year:"
read num
if [ $((num % 4)) -eq 0 ]
then
    echo "$num is a leap year"
else
    echo "$num is not a leap year"
fi
