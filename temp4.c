#include<stdio.h>
#include <limits.h>

int main() {
  char a[16];
  char b[16];
  char c[24];

  unsigned int i = 0;
  i--;
  printf("%u",i);
  strcpy_s(a, sizeof(a), "0123456789abcde");
  //printf("%s\n",a );
  strcpy_s(b, sizeof(b), "0123456789abcde");
  strcpy_s(c, sizeof(c), a);
  strcat_s(c, sizeof(c), b);
}
