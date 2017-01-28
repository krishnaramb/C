//how to shift

#include <stdio.h>

int main ()

{
	int num[] = {5,2,4,6,13,201,2,7,10,7,2,8,0};
	int size = sizeof(num)/sizeof(num[0]);

	for(int j = 1; j < size; j++)
	{
		int key = num[j];
		int i = j-1;
		while (i >= 0 && num[i] > key)
		{
			num[i+1] = num[i]; //shifting
			i = i -1;
		}
		num[i+1] = key;

	} 

 		for(int loop = 0; loop < size; loop++)
		{
			printf("%d\n", num[loop]);
		
		}
	


}



