#include<stdio.h>
int main(){
	int a, b;
    printf("Enter two intergers: ");
    scanf("%d %d", &a, &b);
    printf("\nMaximum value of %d and %d is %d.\n",a,b,(a>b)?a:b);
	return 0;
}