
/*
Algo used
1. pointer P1 points to the beginning of the arrays
2. pointer P2 points to the end of the arrays
Do the following(3-6) until P1 <= p2
  3. if P1 points to 0 an P2 points to 0, increment P1 and hold P2
  4. if P1 points to 0 and P2 points to 1, increment P1 and decrement P2
  5. if P1 points to 1 and P2 points to 0,sort and increment P1 and decrement P2
  6. if P1 points to 1 an P2 points to 1, hold P1 and decrement P2
*/
#include<stdio.h>

/*function for inplace sorting an array with 1s  and 0s so all all the 0s comes
the LHS of the array*/
int * inplacesort(int A[], int sz)
{
  int *p1 = A;
  int *p2 = A + sz -1;
  while (p1 <= p2)
  {

    if (*p1 == 0 && *p2 == 0)
      p1++;
    else if(*p1 == 0 && *p2 == 1)
    {
      p1++;
      p2--;
    }
    else if (*p1 == 1 && *p2 == 0 )
      {
        *p1++ = 0;
        *p2-- = 1;
      }
    else
    {
      p2--;
    }

  }
  return A;
}

//For testing subroutine
void printArray(int array[],int sz)
{
   for(int i = 0; i < sz; ++i)
    printf("%d ",array[i]);
   printf("\n");
}


/*Driver program for testing the subroutine*/
int main()
{

  int A1[] = {0,0,0,1,1,1};
  int A2[] = {0,0,1,0,1,1};
  int A3[] = {1,1,1,1,0,0};
  int A4[] = {0,0,1,1,1,0};
  int A5[] = {1,0,0,0,0,0};
  int A6[] = {1,1,1,1,1,1};
  int A7[] = {0,0,0,0,0,0};
;
 printArray(inplacesort(A1, 6), 6);
 printArray(inplacesort(A2, 6), 6);
 printArray(inplacesort(A3, 6), 6);
 printArray(inplacesort(A4, 6), 6);
 printArray(inplacesort(A5, 6), 6);
 printArray(inplacesort(A6, 6), 6);
 printArray(inplacesort(A7, 6), 6);

 }
