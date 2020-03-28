#include <stdio.h>

float avg_of_three(float, float, float);

float avg_of_three(float a, float b, float c)
{
  return (a  + b  + c ) / 3;
}

int main(void)
{
  float a,b,c;
  printf("Enter the three Numbers:\n");
  scanf("%f\n%f\n%f", &a, &b, &c);

  printf("The average of three numbers is %f\n", avg_of_three(a, b, c));

  return 0;
}