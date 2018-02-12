#include <stdio.h>
#include <limits.h>

/*determining the range of types: */
int main()
{
  printf ("signed char min = %d\n",SCHAR_MIN);
  printf ("signed char max =  %d\n",SCHAR_MAX);
  printf("signed int max = %d\n", INT_MAX);
  printf("signed int min = %d\n", INT_MIN);
  printf("unsigned int max = %u\n",UINT_MAX);
  printf("--------------------------\n");
  printf ("signed char max = %d\n",(char)((unsigned char) ~0 >> 1));
  printf ("unsigned int max = %u\n", (unsigned int)~0);
  printf("singed int max = %d\n", (int)((unsigned int)~0 >> 1));
  return 0;
}
