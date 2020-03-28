#include <stdio.h>

float convert_to_fahrenheit(float);

float convert_to_fahrenheit(float temp)
{
  return ((temp * 9) / 5) + 32;
}

int main(void)
{
  float temperature;
  printf("Enter the temperature in celsius:\n");
  scanf("%f", &temperature);

  printf("%f in fahrenheit scale is %f\n", temperature, convert_to_fahrenheit(temperature));

  return 0;
}