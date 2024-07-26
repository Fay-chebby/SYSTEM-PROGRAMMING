#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;  // Process ID type

    // Fork the process
    pid = fork();

    // Check if fork() was successful
    if (pid < 0) {
        // Fork failed
        fprintf(stderr, "Fork failed\n");
        return 1;
    }
    else if (pid == 0) {
        // This is the child process
        printf("Hello from the Child Process!\n");
        printf("Child Process ID: %d\n", getpid());
    }
    else {
        // This is the parent process
        printf("Hello from the Parent Process!\n");
        printf("Parent Process ID: %d\n", getpid());
        printf("Waiting for Child Process to finish...\n");

        // Wait for the child process to complete
        wait(NULL);
        printf("Child Process Finished.\n");
    }

    return 0;
}
