#include <stdio.h>

void get_message(char * msg)
 {

 	*msg= "aren't ponters fun?";
 	
 }


 int main(void)

 {	
 	char *string;
 	get_message(string);
  	puts(string);
 	return 0;


 }