#include <stdio.h>

struct entry {
	int value;
	struct entry * next;
};


int main()

{
	struct entry n1,n2,n3;
	n1.value = 100;
	n2.value = 200;
	n3.value = 300;
    n1.next = &n2;
    n2.next = &n3;
    int i;
   i = n1.next->next->value;
   printf("i = %d",i);




}