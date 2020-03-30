#include <stdio.h>

#include <stdio.h>

int print_multiplication_table(int, int);

int print_multiplication_table(int m, int n)
{

  for (int i = 1; i <= n; i++)
  {
    printf("%d x %d = %u\n",m ,i , m * i);
  }

  return 0;
}

int main(void)
{
  int m, n; 
  printf("Enter value of m:\n");
  scanf("%d", &m);
  printf("Enter value of n:\n");
  scanf("%d", &n);

  printf("Multiplication table of %d till %d is:\n",m,n);
  print_multiplication_table(m, n);

  return 0;  
}

