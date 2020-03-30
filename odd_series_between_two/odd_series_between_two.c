#include <stdio.h>

#include <stdio.h>

int print_odd_numbers_between(int, int);

int print_odd_numbers_between(int a, int b)
{
  int min = a < b ? a : b;
  int max = a > b ? a : b;
  
  for (int i = min; i <= max; i++)
  {
    if((i & 1) == 1)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}

int main(void)
{
  int a, b; 
  printf("Enter two numbers:\n");
  scanf("%d\n%d", &a, &b);

  printf("all the odd numbers between %d and %d is:\n",a, b);
  print_odd_numbers_between(a, b);

  return 0;  
}

