#include <stdio.h>

int print_fibonacci(int);

int print_fibonacci(int num)
{
  unsigned int a = 1, b = 1;

  while (num > 0)
  {
    printf("%u\n", a);
    b = a + b;
    a = b - a;
    num--;
  }
  
  return 0;
}

int main(void)
{
  int a; 
  printf("Enter a number:\n");
  scanf("%d", &a);
  printf("Fibonacci series:\n");
  print_fibonacci(a);
  return 0;  
}

