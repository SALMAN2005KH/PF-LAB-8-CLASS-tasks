#include<stdio.h>
#include<string.h>
int main(){
	char words[4][10] = {"Apple","Orange","Kiwi","Grapes"};
	int length;
	for (int i=0; i<4; i++){
		printf("%s", words[i]);
		length = strlen(words[i]);
		printf(" : length of %s : %d\n", words[i], length);
	}
return 0;
}
