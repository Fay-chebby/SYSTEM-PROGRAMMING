#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    // Fork the process
    pid = fork();

    if (pid < 0) {
        // Fork failed
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("Hello from the Child Process!\n");
    } else {
        // Parent process
        printf("Hello from the Parent Process!\n");
    }

    return 0;
}

