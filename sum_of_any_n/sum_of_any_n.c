#include <stdio.h>

#include <stdio.h>

unsigned int get_sum_of_series(int, int);

unsigned int get_sum_of_series(int a, int b)
{
  int min = a < b ? a : b;
  int max = a > b ? a : b;
  unsigned int sum = 0;
  
  for (int i = min; i <= max; i++)
  {
    sum = sum + i;
  }

  return sum;
}

int main(void)
{
  int a, b; 
  printf("Enter two numbers:\n");
  scanf("%d\n%d", &a, &b);

  printf("Sum of the numbers between %d and %d is: %u\n",a, b, get_sum_of_series(a, b));

  return 0;  
}

