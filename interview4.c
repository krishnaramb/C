#include <stdio.h>


char *getString()
{
  char *str = "GfG"; /* Stored in the read only part of the shared memory */
 
 
  return str; 
}     
int main()
{
  printf("%s", getString());  
  //getchar();
  return 0;
}