#include <stdio.h>

float calculate_simple_interest(float, float, float);

float calculate_simple_interest(float p, float t, float r)
{
  return ((p * t * r) / 100);
}

float main(void)
{
  float p,t,r;

  printf("Enter the Principle amount:\n");
  scanf("%f", &p);
  printf("Enter the interst rate:\n");
  scanf("%f", &t);
  printf("Enter the period:\n");
  scanf("%f", &r);

  printf("Simple interest for the given data is %f\n", calculate_simple_interest(p, t, r));


  return 0;
}