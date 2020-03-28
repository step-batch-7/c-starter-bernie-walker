#include <stdio.h>

int gcd(int,int);

int gcd(int num1, int num2)
{
  int min = num1 < num2 ? num1 : num2;

  for (int divisor = min; divisor >= 1; divisor--)
  {
    if(num1 % divisor == 0 && num2 % divisor == 0)
    {
      return divisor;
    }
  }
}

int lcm(int, int);

int lcm(int num1, int num2)
{
 return (num1 * num2) / gcd(num1, num2);
}

int main(void)
{
  int a,b;
  printf("Enter two number:\n");
  scanf("%d\n%d", &a, &b);

  printf("least common multiple of %d and %d is %d\n", a,b,lcm(a,b));
}