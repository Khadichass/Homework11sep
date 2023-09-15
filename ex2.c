#include <stdio.h>

int main()
{
  int width;
  int length;


  printf("Enter the width of rectangle:");
  scanf("%d", &width);
  printf("Enter the length of rectangle:");
  scanf("%d", &length);


  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < width; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}