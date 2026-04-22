#!/bin/bash
echo "--- 1. Navigation & Listing ---"
pwd                               # [cite: 20]
ls -lrt                           # [cite: 4]
ls -a                             # [cite: 21]

echo -e "\n--- 2. Directory & File Creation ---"
mkdir -p temp1/temp2              # [cite: 6]
touch file1.txt                   # [cite: 30]
echo "This is line 1" > file1.txt
echo "This is line 2" >> file1.txt
cat file1.txt                     # 

echo -e "\n--- 3. Copy & Move ---"
cp file1.txt file2.txt            # [cite: 6]
mv file2.txt renamed.txt          # [cite: 19]

echo -e "\n--- 4. Permissions (chmod) ---"
ls -l renamed.txt
chmod 777 renamed.txt             # [cite: 38]
ls -l renamed.txt

echo -e "\n--- 5. Statistics & Search ---"
wc -l file1.txt                   # 
grep "line 1" file1.txt           # 
head -1 commands_demo.sh          # [cite: 18]

echo -e "\n--- 6. Disk Usage ---"
du -sh .                          # [cite: 164]
df -h .                           # [cite: 164]
