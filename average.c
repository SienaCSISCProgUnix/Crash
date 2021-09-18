// to see the error, enter a non-integer value to terminate the loop
// on the first iteration

#include <stdio.h>

int main() {

  int count = 0;
  int sum = 0;
  int num;

  while (scanf("%d", &num) == 1) {

    count++;
    sum += num;
  }

  printf("Avg: %d\n", sum/count);

  return 0;
}

