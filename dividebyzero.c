#include <stdio.h>

int main() {

  int i;

  for (i=10; i>=0; i--) {
    printf("1/%d is %f\n", i, 1.0/i);
  }
  
  return 0;
}
