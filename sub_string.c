/* subroutine to find given string is the sub-string of another without using library functions*/


#include <stdio.h>

/*finding the sub-string by brute force without using any library functions*/


int stringlength(char *str)
{
	int len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return len;
}


char * isSubstring(char *string, char *substring)
{
	int count =0;
	
	if(stringlength(string) < stringlength(substring))
	{
		printf("substring is bigger than main string");
		return NULL;
	}

	else if(!*substring)
	{
		printf("substring is empty");

		return NULL;

	}
	
		while (*string)
		{
			
			if (*string == *substring)
			{
				count++;
				string++;
				substring++;
				
				if (!*substring)  				//if we reach the end of the string/  imp I had done mistake here 
				{
					return string-count+1;  	//returning the the pointer where first match starts
		
				}


			}else{

				string = string -count +1;      //string reset
				substring = substring -count;   //substring reset
				count = 0;						//count reset
			}

		 
		 
		
		}
		return NULL;

	

}


int main ()

{	
	char *string1 ="krishna";
	char *string2 ="shn";
	
	if (isSubstring(string1,string2))
	{
		printf("\nYes\n");
		

	}
	else
	{
		printf("\n NO\n");
	} 


}
