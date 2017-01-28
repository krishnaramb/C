#include <stdio.h>


char *getString()
{
  char str[] = "GfG"; /* Stored in stack segment */
 
  /* Problem: string may not be present after getSting() returns */
  return str; 
}     
int main()
{
  printf("%s", getString());  
  getchar();
  return 0;
}