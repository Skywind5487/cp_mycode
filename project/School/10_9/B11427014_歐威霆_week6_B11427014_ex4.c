#include<stdio.h>
int vote_menu(){
	printf("Enter 1 to vote for A\n");
	printf("Enter 2 to vote for B\n");
	printf("Enter 3 to vote for C\n");
	printf("Enter 0 to stop voting\n");
	int input;
	printf("Vote: ");
	scanf("%d", &input);
	return input;
}
void show_result(int A, int B, int C){
	printf("\nResults:\n");
	printf("A: %d votes\n", A);
	printf("B: %d votes\n", B);
	printf("C: %d votes\n", C);
	if (A > B && A > C) {
	    printf("Winner: A\n");
	}
	else if (B > A && B > C) {
	    printf("Winner: B\n");
	}
	else if (C > A && C > B) {
	    printf("Winner: C\n");
	}
	else {
	    printf("Result: It's a tie!\n");
	}
}
int main(){
	int input;
	input = vote_menu();
	int A, B, C;
	A=0;
	B=0;
	C=0;
	int flag;
	flag = 1;
	if(input==0){
		flag=0;
	}
	while(flag){
		switch(input){
			case 1:{
				A++;
				break;
			}
			case 2:{
				B++;
				break;
			}
			case 3:{
				C++;
				break;
			}
			case 0:{
				flag = 0;
				break;
			}
			default:{
				printf("Invalid number.\n");
				break;
			}	
		}
		if(flag){
			input = vote_menu();
		}
		
	}
	
	show_result(A, B, C);	
	return 0;
}
