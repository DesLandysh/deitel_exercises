#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
  /* 5.14 */
  puts("/* one of 2, 4, 6, 8, 10 */")'
  printf("%d %d %d %d %d\n", tok_even(), tok_even(), tok_even(), tok_even(), tok_even());
  
  puts("/* one of 3, 5, 7, 9, 11 */")'
  printf("%d %d %d %d %d\n", tok_odd(), tok_odd(), tok_odd(), tok_odd(), tok_odd());
  
  puts("/* one of 6, 10, 14, 18, 22 */");
  printf("%d %d %d %d %d\n", tok_six(), tok_six(), tok_six(), tok_six(), tok_six());


  /* 5.11 */
  double y = 2.456789;
  
  printf("2.456789 == %d\n", round_to_integer(y));
  printf("2.456789 == %.4lf\n", round_to_tenths(y));
  printf("2.456789 == %.4lf\n", round_to_hundreths(y));
  printf("2.456789 == %.4lf\n", round_to_thousandths(y));

  return 0;
}//237