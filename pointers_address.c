#include <stdio.h>



int testfn (int c,int v, int w)
{
printf("%d\n",*(&c));
printf("%d\n",*(&c+1));
printf("%d\n",*(&c+2));
}
int main(){
testfn(34,45,56);
}
  