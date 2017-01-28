#include <stdio.h>


void InsertionSort(int *start,int *end)
	{
		for(int *i = start + 1; i!= end;i++)
			{
				for (int *j = start; j < i ; j++)  // the code is not optimized; After the short is found, you should not go to the j-1 entry level
					{
						if( *i < *j)
						   {
							int key = *j;
							*j = *i;
							*i = key;
						   }

					}

			}

	}
	


int main ()

{
	int num[] = {5,2,4,6,13,201,2,7,10,7,2,8,0}; //numbers to be shorted

	int size = sizeof(num)/sizeof(num[0]);

	InsertionSort(num, size+num); //Half open range

	for(int loop = 0; loop < size; loop++)
		{
			printf("%d\n", num[loop]);
		
		}
	


}
	