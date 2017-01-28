/* Program to find whether a given string is of unique characters of not */

#include <stdio.h>
#include <string.h>

 

int isUnique (char *str)
{

	int len = strlen(str);
	int array[256] = {0};
	int ascii;
	for (int i =0; i< len; i++)
	{
		ascii = str[i];
		array[ascii]++;
		if (array[ascii] > 1)
			return 0;

	}

return 1;



}


int main ()

{
	char *string = "Krishnaram";
	if (isUnique(string))
	{
		printf("The string %s is Unique",string);
	}
	else 
	{
		printf("The string %s is  not Unique",string);
	}

}
	