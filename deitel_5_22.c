/* 5.22 */

#include <stdio.h>
#include <limits.h>
#include <assert.h>
#include <math.h>

/* 5.22.a */
int res_div(int a, int b)
{
  return (b > 0) ? (a / b) : 0;
}

/* 5.22.b */
int res_mod(int a, int b)
{
  return (a % b);
}

/* 5.22.c */
void analize_digit(int number)
{
  if (number > 1 && number < SHRT_MAX){

    while (number % 10 != 0){
      printf("%d  ", number % 10);
      number /= 10;
    }
    
  }
  else {assert("Number is not in 1..32767 range.");}

  printf("\n");
}


int main(void)
{
  
  short test_number = 4562;
  int test_neg = -32767;     /* negative */
  int test_zero = 0;         /* zero */
  int test_int = 45621;      /* more than short int */
  int test_neg_int = -45621; /* more neg than short int */

  analize_digit(test_number);   /* result */
  analize_digit(test_neg);      /* no result */
  analize_digit(test_zero);     /* no result */
  analize_digit(test_int);      /* no result */
  analize_digit(test_neg_int);  /* no result */

  return 0;
}