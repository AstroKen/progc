#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  for(int i = argc - 1; i > 0; i--)
  {
    int len = strlen(argv[i]);
    for(int j = len - 1; j > -1; j--)
    {
      printf("%c", argv[i][j]);
    }
    printf("\n");
  }
  return 0;
}
