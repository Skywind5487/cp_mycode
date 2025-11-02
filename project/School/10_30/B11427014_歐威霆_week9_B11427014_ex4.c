#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define X_SHAPE \
	X(Club)     \
	X(Diamond)  \
	X(Heart)    \
	X(Spade)

#define X_CARD_NUM \
    X(A)           \
    X(Two)         \
    X(Three)       \
    X(Four)        \
    X(Five)        \
    X(Six)         \
    X(Seven)       \
    X(Eight)       \
    X(Nine)        \
    X(Ten)         \
    X(J)           \
    X(Q)           \
    X(K)
    
enum Shape{
	#define X(shape) shape,
		X_SHAPE
	#undef X
};

enum CardNum{
	#define X(rank) rank,
		X_CARD_NUM
	#undef X
};


char* getStringFromShape(enum Shape shape);
char* getStringFromNum(enum CardNum card);
struct cards{
    enum Shape suit;
    enum CardNum rank;
};
enum Shape convertIntToShape(int input);
enum CardNum convertIntToCardNum(int input);



int main(){
	int seed;
	printf("Enter your seed: ");
	scanf("%d",&seed);
	
	srand(seed);
	struct cards user;
	user.suit = convertIntToShape(rand()%4);
	user.rank = convertIntToCardNum(rand()%13);
	printf("You draw: Rank = %s, Suit = %s\n", getStringFromNum(user.rank), getStringFromShape(user.suit));
	
	srand(time(NULL));
	struct cards computer;
	computer.suit = convertIntToShape(rand()%4);
	computer.rank = convertIntToCardNum(rand()%13);
	while (user.suit == computer.suit && user.rank == computer.rank){
		computer.suit = convertIntToShape(rand()%4);
		computer.rank = convertIntToCardNum(rand()%13);
	}
	printf("Computer draws: Rank = %s, Suit = %s\n", getStringFromNum(computer.rank), getStringFromShape(computer.suit));
	
	if(user.rank>computer.rank || (user.rank == computer.rank && user.suit>computer.suit)){
		printf("You win!\n");
	}else{
		printf("Computer wins!\n");
	}
}

enum Shape convertIntToShape(int input){
	return (enum Shape)input;
}

enum CardNum convertIntToCardNum(int input){
	return (enum CardNum)input;
}

char* getStringFromShape(enum Shape shape){
	switch(shape){
#define X(suit) case suit:return #suit;
		X_SHAPE
#undef X
	}
	
}

char* getStringFromNum(enum CardNum card){
	switch(card){
#define X(rank) case rank: return #rank;
		X_CARD_NUM
#undef X
	}
}