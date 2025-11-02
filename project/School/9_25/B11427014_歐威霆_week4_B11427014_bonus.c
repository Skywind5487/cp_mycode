#include<stdio.h>	
int main(){
	printf("Welcome to the elevator simulator!\n");
	printf("This building has floors from B2 (-2) to 2 (2).\n");
	
	int start;
	start = 0;
	printf("Enter your starting floor: ");
	scanf("%d", &start);
	printf("Elevator starts at floor %d.\n\n",start);
	int floor;
	floor = start;
	int input;
	input = -1;
	while(input!=0){
		printf("Enter command (2=up, 2=down, 0=exit): ");
		scanf("%d", &input);
		if(input == 0){
			printf("Doors closing... Goodbye!\n");
			return 0;
		}
		else if(floor==2&&input==1){
			printf("You are already at the TOP floor (2)!\n\n");

		}
		else if(floor==-2&&input==2){
			printf("You are already at the LOWEST floor (B2, -2)!\n\n");	
			
		}
		else if(input == 1){
			floor++;
			printf("Ding! Elvetaor is now at floor %d\n\n", floor);
		}
		else if(input == 2){
			floor--;
			printf("Ding! Elvetaor is now at floor %d\n\n", floor);
		}
		else{
			printf("Invalid command, please enter 1, 2, or 0.\n\n");
		}

	}
	return 0;
}
