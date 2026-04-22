# Experiment 4: Inter-Process Communication (Shared Memory)

This experiment demonstrates how two separate processes (Writer and Reader) communicate using a shared memory segment.

### Files
* `writer.c`: Creates shared memory and writes user input.
* `reader.c`: Reads and prints data from the shared memory.
* `shmfile`: A dummy file used by the `ftok()` function to generate a unique system key.

### How to Run
1. Create the key file: `touch shmfile`
2. Compile: `gcc writer.c -o writer` and `gcc reader.c -o reader`
3. Run Writer: `./writer`
4. Run Reader: `./reader`
