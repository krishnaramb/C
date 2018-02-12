#include <stdio.h>
int array [] = {23, 34,12,17,204,99,16};
#define TOTAL_ELEMENTS (sizeof(array)/sizeof(array[0]))
int main (void)
{
  int d = -1, x;
  printf ("total elements: %u \n", TOTAL_ELEMENTS );
  printf("value of TOTAL_ELEMENTS-2: %u\n",TOTAL_ELEMENTS -2);
  printf("value of d after interger promotion: %u\n", d);
  printf("value of d after interger promotion in hex: %x\n", d);
  printf("sizeof int pointer %u\n",sizeof(int *));
  printf("sizeof int  %u\n",sizeof(int ));
  printf("sizeof char pointer %u\n",sizeof(char * ));
  printf("sizeof char  %u\n",sizeof(char));
  printf("sizeof unsgined int pointer  %u\n",sizeof(unsigned int * ));
  printf("sizeof unsigned int  %u\n",sizeof(unsigned int ));

  if (d <= TOTAL_ELEMENTS -2)
  {
    x = array[d+1];
    printf("This will never be executed");
    printf ("Value of x: %d\n", x);
  }
  printf("End of main");
  return 0;
}
