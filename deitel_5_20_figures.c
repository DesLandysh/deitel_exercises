/*
****
****
****
****
*/

#include <stdio.h>

void fig1(int side)
{
  for (int i = 1; i <= side; ++i)
  {
    for (int k = 1; k <= side; ++k)
    {
      printf("*");
    }     
    printf("\n");
  }
  puts("\n");
}

void figure(int side, char fillCharacter)
{
  for (int i = 1; i <= side; ++i)
  {
    for (int k = 1; k <= side; ++k)
    {
      printf("%c", fillCharacter);
    }     
    printf("\n");
  }
  puts("\n");
}

void figure_SideToOne(int side, char fillCharacter)
{
  for (int i = 1; i <= side; ++i)
  {
    for (int k = side; k >= i; --k)
    {
      printf("%c", fillCharacter);
    }     
    printf("\n");
  }
  puts("\n");
}

void figure_SideToOne_2(int side, char fillCharacter)
{
  for (int i = 1; i <= side; ++i)
  {
    for (int k = i; k <= side; ++k)
    {
      printf("%c", fillCharacter);
    }     
    printf("\n");
  }
  puts("\n");
}

void figure_OneToSide(int side, char fillCharacter)
{
  for (int i = side; i >= 1; --i)
  {
    for (int k = i; k <= side; ++k)
    {
      printf("%c", fillCharacter);
    }     
    printf("\n");
  }
  puts("\n");
}


void figure_parallepiped(int side, char fillCharacter)
{
  for (int i = 1; i <= side; ++i){
    for (int k = side - 1; k >= i; --k){
      printf(" ");
    }
    for (int j = 1; j <= side; ++j){
      printf("%c", fillCharacter);
    }
    printf("\n");
  }
  puts("\n");
}


int main(void)
{
  char filled_char = '#';
  int side = 5;
  
  fig1(4);
  figure(side, filled_char);
  figure_SideToOne(side, filled_char);
  figure_SideToOne_2(side, filled_char);
  figure_OneToSide(side, filled_char);
  figure_parallepiped(side, filled_char);
  
  return 0;
}