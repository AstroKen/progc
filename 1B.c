#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  if(argc < 2) return 1;
  printf("DONE\n");
  char *p;
  p = argv[1];
  int len = strlen(argv[1]);
  for(int i = 1; i < argc; i++)
  {
    if(len < strlen(argv[i]))
    {
      len = strlen(argv[i]);
      p = argv[i];
    }
  }
  char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  int aph[62] = {};
  int tmp[2] = {};
  printf("DONE\n");
  for(int i = 0; i < strlen(p); i++)
  {
    for(int j = 0; j < 62; j++)
    {
      if(alpha[j] == p[i])
      {
        aph[j]++;
        if(tmp[1] < aph[j])
        {
          tmp[0] = j;
          tmp[1] = aph[j];
        }
        break;
      }
    }
  }
  printf("%c %d\n", alpha[tmp[0]], tmp[1]);
/*
  for(int i = 0; i < 62; i++)
  {
    printf("%c, %d\n", alpha[i], aph[i]);
  }
*/
  return 0;
}
