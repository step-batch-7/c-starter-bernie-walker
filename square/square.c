#include <stdio.h>

unsigned int square(int);

unsigned int square(int num)
{
 return num * num;
}

int main(void)
{
  int a; 
  printf("Enter a number:\n");
  scanf("%d", &a);
  
  printf("Square of the given number is %u\n", square(a));

  
  return 0;
}