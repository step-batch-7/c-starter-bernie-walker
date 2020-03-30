#include <stdio.h>

int main(void)
{
  unsigned int amount;
  int denom;

  int a = 1;
  int b = 2;
  int c = 10;
  int d = 50;
  int e = 100;
  int f = 200;
  int g = 500;
  int h = 2000;
  int *denom_ptr = &h;

  printf("Enter the amount:\n");
  scanf("%u", &amount);

  while(amount > 0)
  {
    denom = *denom_ptr;
    printf("Rs %d x %d\n", denom, (amount / denom));
    amount = amount % denom;
    ++denom_ptr;
  }

  return 0;
}