#include <stdio.h>

unsigned char is_even(int);

unsigned char is_even(int num)
{
  return (num & 1) == 0 ? 1 : 0;
}

int main(void)
{
  int a; 
  printf("Enter a number:\n");
  scanf("%d", &a);
  
  if(is_even(a) == 1){
    printf("%d is Even\n", a);
  } 
  else
  {
    printf("%d is not Even\n", a);
  };
  
  return 0;
}