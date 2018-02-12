#include<stdio.h>
#include <string.h>


char* badfunction(int n){
  int m;
  printf("enter the value of n");
  scanf("%d",m);

 char A[m];
 strncpy(A,"ghfhhfhhhfhhfdfasfff",n);
 printf("%s",A);
 return A;
 }

int main(){
  char *val = badfunction(3);
//  printf("%s",badfunction(6));
}
