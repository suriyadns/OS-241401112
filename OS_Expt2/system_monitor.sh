#!/bin/bash
# Expt 2: System monitoring with email alert logic

# 1. Get the disk usage percentage using df, tail, and awk [cite: 164]
# We use $5 to get the 'Use%' column from df -h
usage=$(df -h . | tail -1 | awk '{print $5}' | sed 's/%//g')

echo "Current Disk Usage: $usage%"

# 2. Check if usage is greater than the threshold (e.g., 40%) 
threshold=40

if [ $usage -gt $threshold ]
then
    echo "ALERT: Disk usage has reached $usage% (Threshold: $threshold%)"
    echo "Sending email alert to suriya@fedora..."
    
    # Logic for sending email as per notes [cite: 166]
    # In a real environment: mail -s "Memory reached" suriya@gmail.com < log.txt
else
    echo "Disk usage is within safe limits."
fi
