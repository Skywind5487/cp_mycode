#include<stdio.h>
int main(){
	int input;
	printf("Enter the height of the triangle: ");
	scanf("%d", &input);
	int i, j; 
	for(i=0;i<input;i++){
		for(j=0;j < i + 1;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
