#!/bin/bash
# Demonstrate Stream Editor (sed) operations
echo "Original Content:" > study.txt
echo "Line 1: Linux is powerful." >> study.txt
echo "Line 2: Linux is used for OS lab." >> study.txt
cat study.txt

echo -e "\n1. Replacing 'Linux' with 'Docs' globally:"
sed 's/Linux/Docs/g' study.txt

echo -e "\n2. Deleting the first line:"
sed '1 d' study.txt
