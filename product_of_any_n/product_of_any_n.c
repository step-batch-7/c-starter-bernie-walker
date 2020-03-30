#include <stdio.h>

#include <stdio.h>

unsigned int get_product_of_series(int, int);

unsigned int get_product_of_series(int a, int b)
{
  int min = a < b ? a : b;
  int max = a > b ? a : b;
  unsigned int product = 1;
  
  for (int i = min; i <= max; i++)
  {
    product = product * i;
  }

  return product;
}

int main(void)
{
  int a, b; 
  printf("Enter two numbers:\n");
  scanf("%d\n%d", &a, &b);

  printf("Product of the numbers between %d and %d is: %u\n",a, b, get_product_of_series(a, b));

  return 0;  
}

