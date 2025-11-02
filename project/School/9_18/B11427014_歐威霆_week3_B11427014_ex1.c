#include<stdio.h>	
int main(){
	printf("Enter an integer (0-255): ");
	char input;
	scanf("%d", &input);
	printf("%d = %c\n", input, input);
	return 0;
}
