#!/bin/bash
# Expt 1: Shell scripts with filters and pipes

echo "--- 1. Original Data Content ---"
cat students.txt

echo -e "\n--- 2. SORT & UNIQ (Removing duplicate entries) ---"
sort students.txt | uniq

echo -e "\n--- 3. GREP (Searching for 'csbs' students only) ---"
grep "csbs" students.txt

echo -e "\n--- 4. CUT (Extracting only the 2nd field: Student Names) ---"
cut -d':' -f2 students.txt

echo -e "\n--- 5. TR (Converting names to Uppercase for report) ---"
cut -d':' -f2 students.txt | tr 'a-z' 'A-Z'
