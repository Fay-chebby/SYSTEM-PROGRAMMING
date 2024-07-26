#!/bin/bash

# Create a C file named Forking.c and write the C program to it
#!/bin/bash

# Check if the script is executable. If not, make it executable and rerun
if [ ! -x "$0" ]; then
    echo "Making the script executable..."
    chmod +x "$0"
    exec "$0" # Re-run the script with new permissions
fi

# Create a C file named Forking.c and write the C program to it
cat > Forking.c <<EOL
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;

    // Fork a new process
    pid = fork();

    if (pid < 0) {
        // Fork failed
        fprintf(stderr, "Fork Failed\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("This is the Child Process. PID: %d\n", getpid());
    } else {
        // Parent process
        printf("This is the Parent Process. PID: %d\n", getpid());
        printf("Child's PID: %d\n", pid);
    }

    return 0;
}
EOL

# Compile the C program
gcc -o Forking Forking.c

# Execute the compiled program
./Forking

