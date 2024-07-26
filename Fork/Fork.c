#include <stdio.h>
#include <unistd.h>

int main() {
  printf("I have a big cookie!\n");

  for (int i = 0; i < 4; i++) {
    int child = fork();
    if (child == 0) {
      printf("I'm a child cookie!\n");
      break;
    }
  }

  return 0;
}
