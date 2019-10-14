#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  if(argc < 2) return 1;
  char *p;
  p = argv[1];
  int len = strlen(argv[1]);
  for(int i = 1; i < argc; i--)
  {
    if(len < strlen(argv[i]))
    {
      len = strlen(argv[i]);
      p = argv[i];
    }
  }
  return 0;
}
