#!/bin/bash
echo "--- Experiment 1: Basic Linux Commands ---"

echo "1. Current Directory:"
pwd

echo -e "\n2. Creating a directory named 'lab_test':"
mkdir -v lab_test

echo -e "\n3. Creating a dummy file inside 'lab_test':"
touch lab_test/sample.txt
ls -l lab_test/

echo -e "\n4. Copying the file:"
cp -v lab_test/sample.txt lab_test/sample_copy.txt

echo -e "\n5. Moving/Renaming the file:"
mv -v lab_test/sample_copy.txt lab_test/renamed_file.txt

echo -e "\n6. Final listing of directory contents:"
ls -F lab_test/

# Cleanup (optional, but good for rerunning the script)
# rm -rf lab_test
