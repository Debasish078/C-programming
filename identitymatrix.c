#include<stdio.h>                                                              
                                                                                
#define COLUMN 10                                                               
#define ROW 10                                                                  
                                                                                
void main()                                                                     
{                                                                               
  int identity_matrix[ROW][COLUMN];                                             
  int i,j, rows, columns;                                                       
                                                                                
  printf("\nEnter Matrix Rows: ");                                              
  scanf("%d", &rows);                                                           
  printf("\nEnter Matrix Columns: ");                                           
  scanf("%d", &columns);                                                        
                                                                                
  for(i=0;i<rows;i++)                                                           
  {                                                                             
    for(j=0;j<columns;j++)                                                      
    {                                                                           
      if(i==j)                                                                  
      {                                                                         
        identity_matrix[i][j] = 1;                                              
      }                                                                         
      else                                                                      
      {                                                                         
       identity_matrix[i][j] = 0;                                               
      }                                                                         
    }                                                                           
  }                                                                             
  printf("\nIdentity Matrix: \n");                                              
  for(i=0;i<rows;i++)                                                           
  {                                                                             
    for(j=0;j<columns;j++)                                                      
    {                                                                           
      printf("%d\t", identity_matrix[i][j]);                                    
    }                                                                           
    printf("\n");                                                               
  }                                                                             
}  
