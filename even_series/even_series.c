#include <stdio.h>

#include <stdio.h>

int print_even_series(int);

int print_even_series(int num)
{

  for(unsigned int i = 1; i < num; i++)
  {
    if((i & 1) == 0)
    {
      printf("%u\n", i);
    }
  }
  
  return 0;
}

int main(void)
{
  int a; 
  printf("Enter a number:\n");
  scanf("%d", &a);
  printf("Even number series:\n");
  print_even_series(a);
  return 0;  
}

