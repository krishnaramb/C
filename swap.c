#include <stdio.h>


void swap (char *str)
{
	*str = (char *)"krishna";
}

int main()
{
	char *string ="ram";
	swap(string);
	puts(string);

}