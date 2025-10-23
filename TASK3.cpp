#include<stdio.h>
int main (){
  int arr[3][3] = {{12, 45, 36} ,{12, 89, 21} ,{43, 23 ,65}};
  
  int i, j;
  
  for (i=0; i<3; i++){
   	for (j=0; j<3; j++){
   		printf(" %d ",arr[i][j]);
	   }
	   printf("\n");
   }
    printf("\n");
    int max = arr[0][0];
   for (i=0; i<3; i++){
   	for (j=0; j<3; j++){
   		if (max<arr[i][j]){
   			max = arr[i][j];
		   }
	   }
	   printf("\n");
   }
  printf("The maximum number in matrix is %d",max);
    return 0;
}
