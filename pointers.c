#include <stdio.h>

int main ()

{

 int n =4;
 double pi = 3.14159;
 int *pn = &n;
 double *ppi = &pi;
 printf("pi = %g",*ppi);
 *ppi = *ppi + *pn;
 printf("\npi = %g",*ppi);

ppi = (double *)pn;  //casting pointers
printf("\n value at the address PPi is  = %g",*ppi);
}
