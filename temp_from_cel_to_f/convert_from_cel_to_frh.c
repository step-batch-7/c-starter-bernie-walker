#include <stdio.h>

float convert_to_celsius(float);

float convert_to_celsius(float temp)
{
  return (((temp - 32) * 5)/9);
}

int main(void)
{
  float temperature;
  printf("Enter the temperature in fahrenheit:\n");
  scanf("%f", &temperature);

  printf("%f in celsius scale is %f\n", temperature, convert_to_celsius(temperature));

  return 0;
}