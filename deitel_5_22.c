/* 5.22 */

#include <stdio.h>
#include <limits.h>

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
void analize_digit(short number)
{
  if (number < 1 || number > SHRT_MAX){
    //temp = -1;
    //while (temp != 0){
    
    printf("%d", 4);
    printf("  ");
    }
  }
  else assert("Number is not in 1..32767 range.");

}


int main(void)
{
  short test_number = 4562;
  // int test_neg = -32767;     /* negative */
  // int test_zero = 0;         /* zero */
  // int test_int = 45621;      /* more than short int */
  // int test_neg_int = -45621; /* more neg than short int */

  analize_digit(test_number);

  return 0;
}