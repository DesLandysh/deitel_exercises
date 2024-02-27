#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 5.11 */
int round_to_integer(double x)
{
  return (int)floor(x);
}

double round_to_tenths(double x)
{
  return floor(x * 10 + .5) / 10;
}

double round_to_hundreths(double x)
{
  return floor(x * 100 + .5) / 100;
}

double round_to_thousandths(double x)
{
  return floor(x * 1000 + .5) / 1000;
}

/* 5.14 */
int tok_even(void)
{
  /* one of 2, 4, 6, 8, 10 */
  return (2 * (1 + rand() % 5));
}

int tok_odd(void)
{
  /* one of 3, 5, 7, 9, 11 */
  return (2 * (1 + rand() % 5)) + 1;
}

int tok_six(void)
{
  /* one of 6, 10, 14, 18, 22 */
  return (4 * (1 + rand() % 5)) + 2;
}


/* 5.15 */
double hypotenuse(double a, double b)
{
  return pow((a * a + b * b), .5); /* == sqrt(a * a + b * b) */
}

/* 5.16 */
int integerPower(int base, unsigned int exponent)
{
  int res = base;
  for (int i = 1; i < exponent; ++i) res *= base;
  return res;
}

int main(void)
{
  /* 5.14 */
  puts("/* one of 2, 4, 6, 8, 10 */");
  printf("%d %d %d %d %d\n", tok_even(), tok_even(), tok_even(), tok_even(), tok_even());
  
  puts("/* one of 3, 5, 7, 9, 11 */");
  printf("%d %d %d %d %d\n", tok_odd(), tok_odd(), tok_odd(), tok_odd(), tok_odd());
  
  puts("/* one of 6, 10, 14, 18, 22 */");
  printf("%d %d %d %d %d\n\n", tok_six(), tok_six(), tok_six(), tok_six(), tok_six());


  /* 5.11 */
  double y = 2.456789;
  
  printf("2.456789 == %d\n", round_to_integer(y));
  printf("2.456789 == %.4lf\n", round_to_tenths(y));
  printf("2.456789 == %.4lf\n", round_to_hundreths(y));
  printf("2.456789 == %.4lf\n", round_to_thousandths(y));

  /* 5.15 */
  printf("\ntris\tside1\tside2\t  res\n");
  printf("   1\t%.2lf\t%.2lf\t%.2lf\n", 3.0, 4.0, hypotenuse(3.0, 4.0));
  printf("   2\t%.2lf\t%.2lf\t%.2lf\n", 5.0, 12.0, hypotenuse(5.0, 12.0));
  printf("   3\t%.2lf\t%.2lf\t%.2lf\n", 8.0, 15.0, hypotenuse(8.0, 15.0));

  /* 5.16 */
  printf("\nintegerPower(3, 4) is %d\n", integerPower(3, 4));
  
  return 0;
}