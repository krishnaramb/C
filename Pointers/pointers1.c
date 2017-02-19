#include<stdio.h>
#include<conio.h>


void process_var ( int x ) {
    x = 5 ;
}
void fun () {
    int x = 3 ;
    process_var ( x ) ;

    printf("%d",x);
    }

void main()
{
  fun();
}
