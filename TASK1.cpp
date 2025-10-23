#include<stdio.h>
int main (){
	int num;
	int i, j;
	printf("Enter number of Tables : ");
	scanf("%d",&num);
	for (i=1; i<=num; i++){
		printf("%d :",i);
		for (j=1; j<=10; j++){
			printf(" %d\t", i*j);
		}
		printf("\n");
	}
	return 0;
}