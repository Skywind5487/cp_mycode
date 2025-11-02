#include<stdio.h>	
int isPerfectNumber(int);

int main(){
	int input;
	printf("Please enter a positive integer: ");
	scanf("%d", &input);
	if(isPerfectNumber(input)){
		printf("%d is a perfect number.\n",input);
	}
	else{
		printf("%d is not a perfect number.\n",input);	
	}
	return 0;
}

int isPerfectNumber(int input){
	printf("Divisors: ");
	int i, sum;
	sum = 0;
	for(i=1;i<input;i++){
		if(input%i==0){
			printf("%d ", i);
			sum+=i;
		}
	}
	printf("\n");
	
	printf("Sum of the divisors = %d\n", sum);
	
	return sum==input;
	
}