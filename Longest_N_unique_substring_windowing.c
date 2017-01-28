/*algorithm to find the Longest N_Unique substring with the order of 0(n) complexity */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * SliceString(char *str, int num )
{
	
	char *buffer = malloc((num +1) * sizeof(char)); // make sure buffer includes
	                                         // space for null terminator

	if ( ! buffer) {
	  printf("malloc is not possible");
	  return NULL;
	}

	strncpy(buffer, str, num); // copy first 3 chars from source
	buffer[num] = '\0';           // remember to add null terminator
	//printf("Buffer: %s",buffer);
	return buffer;
	//free(buffer); free taking care of in main func
	
}

int main()
{

	int finalcount = 0;
	char * finalptr;

	int count;

	char sub[2];
	int num[2];

	sub[0] = '\0';
	num[0] = 0;

	sub[1] = '\0';
	num[1] = 0;

	char *ptr1;
	char *ptr2;
	char *tmpstr;

	int len;
	char *string = "aaabbcdeabcd";
	len = strlen(string);

	for (int i = 0; i< len; i++)
	{
		if (string[i] == sub[0])
		{
			num[0]++;

		}
		else if (string[i] == sub[1])
		{
			num[1]++;

		}
		else   //for every new character
		{
			if (sub[0] == '\0')  //<== this if fills the first box
			{
				sub[0] = string[i];  //fill the first box of the window
				num[0]++;
				ptr1 = string +i;
			}
			else if (sub[1] == '\0') //<== this if fills the second box
			{
				sub[1] = string[i];
				num[1]++;
				ptr2 = string+i;
			}
			else 					//<==this else is for each of the new characters seen
			{
				tmpstr = ptr1;
				count = num[0] + num[1];

				//now left shifting
				ptr1 = ptr2;
				sub[0] = sub[1];
				num[0] = num[1];

				sub[1] = string[i];
				num[1] = 1;
				ptr2 = string+i;

			}

		}
		
		if (count >= finalcount)
		{
			finalptr = tmpstr;
			finalcount = count;
		}



}

char *fval = SliceString(finalptr,finalcount);

printf("The required string is: %s\n",fval);
free(fval);


}


