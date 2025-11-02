#include<stdio.h>	
#include<math.h>
const double EPS = 1e-12;
void ans(int a, int b, int c);

int main(){
	int a, b, c;
	printf("Enter a, b, c with space.\n");
	scanf("%d %d %d", &a, &b, &c);
	ans(a, b, c);
	return 0;
}

void ans(int a, int b, int c){
	double d;
	d = b * b - 4 * a * c;
	if(a==0){
		printf("a can't be 0\n");
	}
	if(d<-EPS){
		printf("Your b^2-4*a*c is less than 0\n");
		return;
	}
	double answer1, answer2;
	answer1 = (0 - b + sqrt(d)) / (2 * a);
	answer2 = (0 - b - sqrt(d)) / (2 * a);
	printf("Two roots are %f and %f\n", answer1, answer2);
	
}