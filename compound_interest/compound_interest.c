#include <stdio.h>
#include <math.h>

float compound_interest(float, float, float, float);

float compound_interest(float p, float t, float r, float n)
{
  return p * pow((1+(r/n)), (n * t));
}

int main(void)
{
 float p,t,r,n;

  printf("Enter the Principle amount:\n");
  scanf("%f", &p);
  printf("Enter the interst rate:\n");
  scanf("%f", &t);
  printf("Enter the period:\n");
  scanf("%f", &r);
  printf("Enter the times of compound per period:\n");
  scanf("%f", &n);

  printf("Simple interest for the given data is %f\n", compound_interest(p, t, r, n));


  return 0;
}