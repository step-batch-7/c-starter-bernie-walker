#include <stdio.h>

char isSpecial(int);

char isSpecial(int num)
{
  return (num < 100 && num >= 90 && num != 97) ? 1 : 0;
}

int modify_char(int);

int modify_char(int num)
{
  int result = num + 13;
  return result >= 123 || isSpecial(result) == 1 ? result - 26 : result;
}

int main()
{
  int genome[] = {71, 117, 118, 102, 32, 118, 102, 32, 106, 117, 110, 103, 32, 79, 114, 101, 97, 118, 114};

  for (int i = 0; i < (sizeof(genome)/4); i++)
  {
    printf("%c\n", modify_char(genome[i]));
  }
  
  return 0;
}

