#include <stdio.h>

int main() {
  int length;

  printf("Enter the length: ");
  scanf("%d", &length);

  for (int i = 1; i <= length; i++) {
    
    for (int space = 1; space <= length - i; space++) {
      printf(" ");
    }

    for (int j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
