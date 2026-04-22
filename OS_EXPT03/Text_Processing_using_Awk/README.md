# Experiment 3: Text Processing using AWK

## Objective
To study and implement column-wise text processing, calculations, and formatted output using the AWK utility.

## Key Concepts [cite: 169, 196, 198]
* **Record**: Each line in the file is treated as a record[cite: 197].
* **Field**: Each column in a line is a field, separated by space or tab[cite: 184, 185, 199].
* **Built-in Variables**: Uses `NR` for record numbers and `NF` for field counts[cite: 206, 207].

## AWK Structure [cite: 211, 212]
1. **BEGIN Block**: Executes once before reading the file for initialization[cite: 213, 214].
2. **Main Block**: Executes for every line in the file to process data[cite: 216, 217].
3. **END Block**: Executes once after the file is read to print final results[cite: 218, 219].

## Implementation [cite: 275, 301, 323]
* **Calculations**: Used variables to find total and average salary[cite: 275, 289].
* **Conditions**: Implemented `if` statements to filter high earners (Salary > 6000)[cite: 301, 303].
* **Logical Operators**: Used `||` (OR) to determine pass/fail results based on marks[cite: 323, 326].
