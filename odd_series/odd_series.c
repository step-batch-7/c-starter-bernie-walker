#include <stdio.h>

#include <stdio.h>

int print_odd_series(int);

int print_odd_series(int num)
{

  for(unsigned int i = 1; i <= num; i++)
  {
    if((i & 1) == 1)
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
  printf("Odd number series:\n");
  print_odd_series(a);
  return 0;  
}

