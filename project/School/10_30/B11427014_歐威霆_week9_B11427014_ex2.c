#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status{
	too_low,
	correct,
	too_high
};

int main(){
	printf("Guess the number (1-100):\n");
	int input;
	int answer;
	srand(time(NULL));
	answer=rand()%100 + 1;
	//printf("Ansewer is %d\n", answer);
	int delta;
	int tries;
	tries = 0;
	enum Status status;

	while(1){
		printf("Your guess: ", input);
		scanf(" %d", &input);
		delta = input - answer;
		tries++;
		status = (delta>0)-(delta<0) + 1;//magic!
		switch (status){
			case too_low:{
				printf("Too low!\n");
				break;
			}
			case correct:{
				printf("Congratulations! You guessed it in %d tries.", tries);
				return 0;
				break;
			}
			case too_high:{
				printf("Too high!\n");
				break;
			}

		}
	}
}

