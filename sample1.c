#include <stdio.h>

void addrpassing(int *array, int *p, char * ch)
{
	printf("Size of array is %d\n size of pointer p is %d \n size of ch is  %d ",(int)sizeof(array),(int)sizeof(p), (int) sizeof(ch));	
}

int main()
{
	int array[3] = {1,3, 4};
	int *p = array;
	char * ch = "ram krishna gopal narayan";
	printf("\nSize of array is %d\n size of pointer p is %d \n size of ch is  %d ",(int)sizeof(array),(int)sizeof(p), (int) sizeof(ch));	
	printf("\n function called-------------\n");
	addrpassing(array,p,ch);

}