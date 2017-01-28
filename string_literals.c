#include <stdio.h>


int StringLength(char *string)
 {
	int count =0;
	while (*string++)
		{
			count++;
			
		}
	return count;
	 	
 }


int main()
{
 char string[] = "Hello World";
 int Len = StringLength(string);
 printf("The number: %d\n",Len); 
 printf("char no:%d\n",StringLength(""));
 printf("char no:%d\n",StringLength("hi!"));


}