#include <stdio.h>
int array [] = {23, 34,12,17,204,99,16};
#define TOTAL_ELEMENTS (sizeof(array)/sizeof(array[0]))
int main (void)
{
  int d = -1, x;
  if (d <= TOTAL_ELEMENTS -2)
  {
    x = array[d+1];
    printf("I am inside the if statement");
  }
  printf("End of main");
  return 0;
}
