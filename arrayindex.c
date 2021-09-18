#include <stdio.h>

int main() {

  int i;
  int a[10];

  for (i=0; i<25000; i++) {
    printf("%d ", i);
    a[i] = i;
  }
  
  printf("\n");
  return 0;
}
