#include<stdio.h>	
int main(){
	int input1, input2;
	printf("Input 1st number: ");
	scanf("%d", &input1);
	printf("Input 2nd number: ");
	scanf("%d", &input2);
	int min_input;
	min_input = input1;
	if(input2 < min_input){
		min_input = input2;
	}
	int i, gcd;
	for(i=1;i<=min_input;i++){
		if(input1%i==0 && input2%i==0){
			gcd=i;
		}
	}
	printf("Highest Common Factor of %d and %d is : %d", input1, input2, gcd);
	return 0;
}
