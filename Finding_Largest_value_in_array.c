#include <stdio.h>

int * Print(int *start, int *end)
	{	
		if (start  == end) { return 0;} //this ensures that if array is empty, we return the pointers that is not valid
	
		int *largest = start;
		while (start != end)
			
 		 {	
			if (*start > *largest) 
			   {
				largest = start;
				
			   }	

						
			printf("numbers: %d\n",*start);
			
			start++;
		 }	
		return largest;
	}


int main()
 {
	int numbers[] ={};	
	
	
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	
	int *Largest =  Print(numbers,size + numbers);
	printf("The largest value is:%d",*Largest);
	
  }

