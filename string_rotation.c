/* subroutine to find the given string is the rotation of the other string without using substring function only once*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int isSubstr(char *str1, char *str2)
{
		if(strstr(str1,str2)){
			return 1;

		}

		return 0;


}


char *concat(char *s1, char *s2)
{
	char *result = malloc(strlen(s1)+strlen(s2)+1); 
	if(result) // if memmory allocation is successful
	{
		strcpy(result,s1);
		strcat(result,s2);
		return result;
	}
	return 0;
}



void isRotational(char *string1, char* string2)
{


	char *join;
	if (strlen(string1) != strlen(string2))
	{
		printf("NO: String length doesn't match");
		return;
	}
	join = concat(string1,string1);
	if (isSubstr(join,string2))
	{
		printf("Yes");

	}
	else {
		printf("No");
	}
	free(join);

}

int main ()

{	

	char *string1 = "krishna";
	char *string2 = "ishnake";
	isRotational(string1,string2);
	

}

	