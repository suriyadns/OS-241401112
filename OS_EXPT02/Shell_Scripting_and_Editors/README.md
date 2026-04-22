# Experiment 2: Shell Scripting and Unix Editors

## Objective
The objective of this experiment is to understand Shell Scripting as a way to automate multiple Linux commands [cite: 2] and to study the usage of various Unix text editors like **sed**, **vi**, and **emacs**.

## 1. Shell Scripting Logic
A Shell Script is a text file with a `.sh` extension containing a sequence of commands executed by the bash shell [cite: 25-28]. This experiment includes:

* **Arithmetic Operations (`arithmetic.sh`)**: Performs addition, subtraction, multiplication, and division using the `expr` command [cite: 112, 116-119].
* **Leap Year Check (`leap_year.sh`)**: Uses `if-else` conditional statements to determine if a given year is a leap year [cite: 125-133].
* **Reverse a Number (`reverse_number.sh`)**: Uses a `while` loop and arithmetic operators (`%` and `/`) to reverse the digits of an input number [cite: 134-145].

## 2. Unix Editors Study
We explored three primary methods of editing files in a Linux environment:

* **sed (Stream Editor)**: A non-interactive editor used to modify files without opening them.
    * *Example*: `sed 's/linux/docs/g' filename` replaces "linux" with "docs" globally.
    * *Example*: `sed '4 d' filename` deletes the 4th line.
* **vi Editor**: A standard visual editor that uses modes.
    * **Insert Mode**: Activated by pressing `i`.
    * **Command Mode**: Used for saving (`:wq!`) or quitting without saving (`:q!`).
* **emacs**: An extensible and customizable text editor used for advanced text processing and coding.

## 3. Execution Instructions
To run the scripts in this folder:
1.  Give execution permission: `chmod +x *.sh`[cite: 38].
2.  Run a specific script: `./script_name.sh`[cite: 40].

## 4. Conclusion
Shell scripting significantly reduces manual work and saves time through easy automation [cite: 103-105]. Mastering editors like `vi` and `sed` is essential for DevOps and Linux administration[cite: 106].
