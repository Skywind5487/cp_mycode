#include<stdio.h>
int main(){
	char Input;
	printf("Play again [Y or N]? ");
	scanf("%c", &Input);
	if (Input == 'Y'){
		printf("Play again!\n");
		printf("I like this game...\n");
	}
	else{
		printf("Exit the game!\n");
		printf("I don't like this game.\n");
	}
	printf("Bye!\n");
	return 0;
}
