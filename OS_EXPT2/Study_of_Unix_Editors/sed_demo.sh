#!/bin/bash
# Experiment 2: sed, vi, and emacs study
echo "--- Testing sed (Stream Editor) ---"

# 1. Create a sample file
echo "Unix is a powerful operating system." > study.txt
echo "Editors include vi, emacs, and sed." >> study.txt

echo "Original Content:"
cat study.txt

echo -e "\n1. Replacing 'Unix' with 'Linux' using sed:"
sed 's/Unix/Linux/' study.txt

echo -e "\n2. Deleting the line with 'emacs' for demonstration:"
sed '/emacs/d' study.txt
