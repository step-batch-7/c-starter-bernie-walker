#include <stdio.h>

int main(void)
{
  unsigned int amount;
  int denom[] = {2000, 500, 200, 100, 50, 10, 5, 1};

  printf("Enter the amount:\n");
  scanf("%u", &amount);

  for(int i = 0; i < 8; i++)
  {
    printf("Rs %d x %d\n", denom[i], (amount / denom[i]));
    amount = amount % denom[i];
  }

  return 0;
}