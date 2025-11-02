#include<stdio.h>
int main(){
	char input;
	printf("Guess the secret letter (A). Press Ctrl+D (Linux/Mac) or Ctrl+Z (Windows) to quit.\n");
	printf("Enter your guess: ");
	while((input = getchar()) != EOF){
		
		if(input == 'G'){
			printf("Correct! The secret letter was 'G'.\n");
			printf("Thanks for playing!");
			return 0;
		}
		else if(input == '\n'){
			continue;
		}
		else{
			printf("Wrong guess! try again.\n");
		}
		printf("Enter your guess: ");
	};
	printf("\nGame ended by user (EOF)");
	return 0;
}
