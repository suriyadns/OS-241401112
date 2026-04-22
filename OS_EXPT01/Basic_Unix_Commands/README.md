# Experiment 1: Basic Unix/Linux Commands

## Objective
To study and implement fundamental Linux commands for file management, directory navigation, system monitoring, and file permissions[cite: 1, 2, 26].

## 1. Navigation & Listing
* **pwd**: Displays the present working directory[cite: 20].
* **ls**: Lists files and directories[cite: 21].
* **ls -l**: Lists with long format (permissions, owner, size)[cite: 19].
* **ls -lrt**: Lists in reverse time order (newest at the bottom).
* **ls -a**: Displays hidden files (those starting with a dot).
* **cd**: Changes directory; `cd ..` to go back and `cd -` to toggle between last two paths.

## 2. File & Directory Operations
* **mkdir**: Creates a new directory[cite: 5].
* **touch**: Creates a new empty file[cite: 30].
* **cat**: Displays the content of a file on the console.
* **cp**: Copies content from a source to a destination[cite: 6].
* **mv**: Moves or renames files and directories.

## 3. File Permissions (chmod)
* Used to change the access permissions of a file using binary format[cite: 38].
* **-rwxrwxrwx**: Represents Read (4), Write (2), and Execute (1) for User, Group, and Others.
* **chmod 777**: Grants full permissions to everyone.

## 4. System Monitoring & Filters
* **wc**: Counts lines (`-l`), words (`-w`), and characters (`-c`) in a file.
* **du**: Checks disk usage or the size of a specific file.
* **df**: Displays the amount of free disk space on the drive[cite: 164].
* **grep**: Searches for a specific pattern or string within a file.
* **head/tail**: Displays the first or last portions (default 10 lines) of a file.

## 5. Summary
This experiment demonstrates how the Shell acts as a bridge between the user and the Linux Kernel to manage hardware resources[cite: 10, 12].
