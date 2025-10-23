#include<stdio.h>
int main (){
  int matrix_1[3][3] = {{12, 45, 36} ,{12, 89, 21} ,{43, 23 ,65}};
  int matrix_2[3][3] = {{2, 4, 6} ,{2, 9, 2} ,{3, 3 ,5}};
  int i, j;
  
  for (i=0; i<3; i++){
   	for (j=0; j<3; j++){
   		printf(" %d ",matrix_1[i][j]);
	   }
	   printf("\n");
   }
    printf("\n");
   for (i=0; i<3; i++){
   	for (j=0; j<3; j++){
   		printf(" %d ",matrix_2[i][j]);
	   }
	   printf("\n");
   }
   
   printf("THE SUM OF MATRIX-1 AND MATRIX-2 IS : \n");
   
   for (i=0; i<3; i++){
   	for (j=0; j<3; j++){
   		printf(" %d ",matrix_1[i][j] + matrix_2[i][j]);
	   }
	   printf("\n");
   }
  
    return 0;
}