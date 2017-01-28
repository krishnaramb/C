/*Program to set the col and row entires of every 0 element of a matrix to 0 */


#include <stdio.h>
#define ROW 5
#define COL 5


int main ()

{	
	int Mattrix[ROW][COL] = { {1,2,3,0,5},{1,2,3,4,5},{1,2,0,4,5},{1,2,3,4,5},{1,2,3,0,5}};
	int z_row[ROW] = {0};
	int z_col[COL] = {0};


	printf("Structure of Matrix Before\n\n\n");
	for(int i = 0 ; i < ROW ; i++){  
	  for(int j = 0 ; j < COL ; j++){  
	    printf("%d", Mattrix[i][j]) ;  
	    printf("\t");  
	  }  
	  printf("\n");  
	}  


	for(int i = 0; i< ROW; i++)
	{
		for(int j =0;j< COL;j++)
		{
			if ( Mattrix[i][j] == 0)
			{
				z_row[i] = 1;
				z_col[j] = 1;

			}
		}

	}



	for(int i = 0; i< ROW; i++)
	{
		for(int j =0;j<COL;j++)
		{
			if (z_row[i] || z_col[j])
			{
				Mattrix[i][j] =0;
			
			}
			

		}


	}


	printf("\n\nStructure of Matrix After\n\n\n");
	for(int i = 0 ; i < ROW ; i++){  
	  for(int j = 0 ; j < COL ; j++){  
	    printf("%d", Mattrix[i][j]) ;  
	    printf("\t");  
	  }  
	  printf("\n");  
	}  
}