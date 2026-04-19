# Experiment 2: System Monitoring with Email Alert

## Objective
To implement a shell script that monitors system resources (Disk Usage) and triggers an alert logic when a predefined threshold is exceeded.

## Technical Overview
The script utilizes the following Linux utilities:
* **df -h**: Check disk space.
* **awk**: Extract percentage usage[cite: 172, 173].
* **sed**: Remove '%' character.
* **if-else**: Compare usage against threshold[cite: 61, 62].

## How to Run
1. cd ~/OS_Expt2
2. chmod +x system_monitor.sh [cite: 38]
3. ./system_monitor.sh [cite: 40]
