#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct card{
	int suit, rank;
};

int main(){
	int seed;
	printf("Enter your seed: ");
	scanf("%d",&seed);
	
	srand(seed);
	struct card user;
	user.suit = rand()%4+1;
	user.rank = rand()%13+1;
	printf("You draw: Rank = %d, Suit = %d\n", user.rank, user.suit);
	
	srand(time(NULL));
	struct card computer;
	computer.suit = rand()%4+1;
	computer.rank = rand()%13+1;
	while (user.suit == computer.suit && user.rank == computer.rank){
		computer.suit = rand()%4+1;
		computer.rank = rand()%13+1;
	}
	printf("Computer draws: Rank = %d, Suit = %d\n", computer.rank, computer.suit);
	
	if(user.rank>computer.rank || (user.rank == computer.rank && user.suit>computer.suit){
		printf("You win!\n");
	}else{
		printf("Computer wins!\n");
	}
}

