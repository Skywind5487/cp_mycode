#include<stdio.h>
int main(){
	int n;
	printf("Enter a 4-digit number: ");
	scanf("%d", &n);
	int sum, digit, n2;
	sum = 0;
	digit = 0;
	n2 = n;
	while(n2/10>0){
		n2 /= 10;
		digit++;
	}
	int i, j, sub;
	sub=1;
	for(i=digit;i>0;i--){
		sub=1;
		for(j=0;j<i;j++,sub*=10){}
		printf("%d + ", n/sub);
		sum += n/sub;
		n%=(sub);
	}
	printf("%d ", n%10);
	sum += n%10;
	printf("= %d", sum);
	return 0;
}
