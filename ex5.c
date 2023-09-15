#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char** str = malloc(sizeof(char*)*4);

  str[0] = malloc(sizeof(char)*10);
  strcpy(str[0],"abcdefgh\0");

  str[1] = malloc(sizeof(char)*12);
  strcpy(str[1],"hadgaubfj\0");

  str[2] = malloc(sizeof(char)*14);
  strcpy(str[2],"fhusbzghrd\0");

  str[3] = malloc(sizeof(char)*16);
  strcpy(str[3],"efnawopijfke\0");

  for (int i = 0; i <= 4; i++)
  {
    printf("%s\n", str[i]);
  }
  
  return 0;
}