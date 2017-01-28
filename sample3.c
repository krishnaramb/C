#include <stdio.h>
#include <stdarg.h>


void minprintf(char *fmt, ...) /* where ... means the number and types of these arguments may vary. And the declaration ... can only appear at the end of the argument list */
	{
		va_list ap;  /* The macro va_list is used to declare a variable  that will refer to each argument in turn, ap is the argumrent pointer*/
		char *p, *sval;
		int ival;
		double dval;

		va_start(ap,fmt); /* The macro va_start initializes ap to point to the first unnamed argument. It must be called once before ap is used
							 There must be at least one named argument; The final named argument is used by va_start to get started */
		for (p = fmt; *p; p++)
		{
			if (*p!='%')
			{
				putchar(*p);
				continue;

			}
			switch (*++p){   // you need to figure out the priority of unary operator * and ++: I think fist it will do preincrement and evaluae value at the address

				case 'd':
					ival = va_arg(ap,int); /* Each call to the va_arg returns one argument and steps ap to the next; va_arg uses a type name to determine what type to return and 
												how big a step to take*/
					printf("%d",ival);
					break;

				case 'f':
					dval = va_arg(ap,double);
					printf("%f",dval);
					break;
				case 's':   
					for(sval=va_arg(ap,char *);*sval;sval++)  // puts(sval) is not used here because it will print the new line character also
						putchar(*sval);
					break;

				case 'c':
						ival = va_arg(ap,int);
						putchar(ival);
						break;

				default:
					putchar (*p);
					break;


			}
		}
		va_end(ap); /* Finally, va_end does whatever cleanup is necessasry. It must be called before the program returns*/
		
	}


int main()

{
	int s = -100;
	char cc = 'M';

	double dd = 10.5;
	char name[] = "Krishna";
	minprintf("\nMy name is %s and my salary is %d and double is %f and my favourite letter is %c",name,s,dd,cc);



}