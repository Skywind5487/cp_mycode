#include<stdio.h>	
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
	int i;
	srand(100);
	int result[6];
	memset(result, 0, sizeof(result));
	int dice1=0;
	for(i=0;i<100;i++){
		dice1 = rand() %6;
		if(dice1 == rand()%6){
			result[dice1]++;
		}
	}
	for(i=0;i<6;i++){
		printf("Pair (%d,%d) appeared %d times\n", i+1, i+1, result[i]);
	}
	return 0;
}