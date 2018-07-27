#include<stdio.h>
void printArray(int array[],int sz)
{
   for(int i = 0; i < sz; ++i)
    printf("%d ",array[i]);
    printf("\n");
}

int* inplacesort(int A[], int sz)
{
  int index_left_0 =0;
  int index_right_1 = sz -1;
  while ( index_left_0 < index_right_1)
  {
       while((A[index_left_0] == 0)  && (index_left_0 < index_right_1))
             ++index_left_0;

       while((A[index_right_1] == 1) && (index_left_0 < index_right_1))
          --index_right_1;

       if(index_left_0 < index_right_1)
         {
              A[index_left_0++] = 0;
              A[index_right_1--] = 1;
         }
  }
  return A;
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
