#include <stdio.h>

#include <stdio.h>

int print_nth_numbers_between(int, int, int);

int print_nth_numbers_between(int a, int b, int n)
{
  int min = a < b ? a : b;
  int max = a > b ? a : b;
  
  for (int i = min; i <= max; i++)
  {
    if((i % n) == 0)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}

int main(void)
{
  int a, b, n; 
  printf("Enter two numbers:\n");
  scanf("%d\n%d", &a, &b);
  printf("Enter the value of n:\n");
  scanf("%d", &n);

  printf("all the %d numbers between %d and %d is:\n",n, a, b);
  print_nth_numbers_between(a, b, n);

  return 0;  
}

