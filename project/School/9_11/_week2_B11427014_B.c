#include<stdio.h>
int main(){
	int n;
	printf("Enter a 4-digit number: ");
	scanf("%d", &n);
	printf("\n");
	int sum;
	sum = 0;
	for(;n/10>0;n/=10){
		printf("%d + ", n%10);
		sum += n%10;
	}
	printf("%d ", n%10);
	sum += n%10;
	printf("= %d", sum);
	return 0;
}
