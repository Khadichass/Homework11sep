#include <stdio.h>

int main()
{
  int numb;
  int sum;

  printf("Enter the number:");
  scanf("%d",&numb);

  for (int i = 1; i <= numb; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      sum = i * j;
      printf("%d * %d = %d\n", i, j, sum);
    }
    
    printf("\n");
  }
  
  
  return 0;
}