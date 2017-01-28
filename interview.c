#include <stdio.h>


int main ()
{
static char a[]="bombay";
char *b="bombaybombay";
printf("\n%d \n %d",(int)sizeof(a),(int)sizeof(b));
return 0;
}
