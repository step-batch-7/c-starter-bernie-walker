#include <stdio.h>

int main(void)
{
  unsigned int amount;
  int denom = 2000;

  printf("Enter the amount:\n");
  scanf("%u", &amount);

  printf("Rs %d x %d\n", denom, (amount / denom));
  amount = amount % denom;
  denom = 500;
  printf("Rs %d x %d\n", denom, (amount / denom));
  amount = amount % denom;
  denom = 200;
  printf("Rs %d x %d\n", denom, (amount / denom));
  amount = amount % denom;
  denom = 100;
  printf("Rs %d x %d\n", denom, (amount / denom));
  amount = amount % denom;
  denom = 50;
  printf("Rs %d x %d\n", denom, (amount / denom));
  amount = amount % denom;
  denom = 10;
  printf("Rs %d x %d\n", denom, (amount / denom));
  amount = amount % denom;
  denom = 5;
  printf("Rs %d x %d\n", denom, (amount / denom));
  amount = amount % denom;
  denom = 1;
  printf("Rs %d x %d\n", denom, (amount / denom));
  
  return 0;
}