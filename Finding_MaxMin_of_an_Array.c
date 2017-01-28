
//Function for finding the Min and Max of an array using pointers to pointers

#include <stdio.h>

void MinMax ( int * start, int * end, int **smallest, int **largest)
	{
		int *begin = start;
		*smallest = start;
		*largest = start;
		if (start == end)
		   {
			*smallest = 0;  //NULL pointers(if the pointer is pointing to nothing)
			*largest = 0;   //NuLL pointers
			
		    }
		
	
		else{
		      while (begin != end)
			{
			  if(*begin > **largest){*largest = begin;}
			   
			   if (*begin < **smallest){*smallest = begin;}
			   begin++;

			}
			
		    }
			

	}



int main()
  {
	int numbers[]={45};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int *Largest = 0;
	int *Smallest =0;

	
	MinMax(numbers,numbers+size, &Smallest, &Largest);
	printf("The largest:%d\n The smallest %d",*Largest,*Smallest);

  }

