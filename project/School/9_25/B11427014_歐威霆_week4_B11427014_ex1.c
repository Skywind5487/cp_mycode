#include<stdio.h>	
int main(){
	int floor;
	floor = 0;
	int input;
	input = -1;
	while(input!=0){
		printf("Elevator starts at floor %d.\n", floor);;
		printf("Enter command (2=up, 2=down, 0=exit): ");
		scanf("%d", &input);
		if(input == 0){
			printf("Program ended.\n");
			return 0;
		}
		else if(input == 1){
			floor++;
		}
		else if(input == 2){
			floor--;
		}
	}
	return 0;
}
