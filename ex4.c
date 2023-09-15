#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;

  printf("Enter the number of string arrays:");
  scanf("%d", &n);

  char **str = malloc(n * sizeof(char *));

  for (int i = 0; i < n; i++) {
    printf("String %d: %s\n", i + 1, str[i]);
  }
  

  return 0;
}