#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//subroutine to find the no of unique character in a string
int numUniqueCharacter(char string[])
{

	int i = 1; 
	int numUniqueChar = 1;  //at least one char
	int FLAG = 1;
	while(string[i])
	{
		
		for (int j = 0; j< i; j++)
		{
			if (string[i] == string[j])
			{	FLAG =0;
				break;

			}

		}
		if (FLAG){
			numUniqueChar++;
			}

		FLAG = 1;  //reset
		i++;
	}
	return numUniqueChar;

}

char * SliceString(char *str, int num )
{
	
	char *buffer = malloc((num +1) * sizeof(char)); // make sure buffer includes
	                                         // space for null terminator

	if ( ! buffer) {
	  printf("malloc is not possible");
	}

	strncpy(buffer, str, num); // copy first 3 chars from source
	buffer[num] = '\0';           // remember to add null terminator
	//printf("Buffer: %s",buffer);
	return buffer;
	//free(buffer); free taking care of in main func
	
}

/*
char *subStringGen(char *str)
{
	int len = strlen(str);
	char *temp = str;


	for (int i =1;i< len; i++)
	{
		*(temp+i) = '\0';


	}
	for(*str;;str++)
	{

	}
}
*/

int main()

{
	char *string = "aabbcdeabcd";
	int reqUniqueCharacter = 2;
	char *str;
	int len;
	int count = numUniqueCharacter(string);
	printf("No: %d \n",count);

	while (*string)
	{

		len = strlen(string);
		for (int i=1;i<= len;i++)
		{ 
				
				str = SliceString(string,i);  //this will slice the string upto 5 character
				count = numUniqueCharacter(str);
				if (count == reqUniqueCharacter)
				{ 
					printf("%s\n",str );

				}
				//printf("%s\n",str );
				free(str);
				

		}
		string++;

	}

}
