#include<stdio.h>	
#include<math.h>
const int EPS = 1e-20;
void ans(int a, int b, int c);

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	ans(a, b, c);
	return 0;
}

void ans(int a, int b, int c){
	double d;
	d = b * b - 4 * a * c;
	if(d<EPS){
		printf("Your b^2-4*a*c is less than 0");
	}
	double answer1, answer2;
	answer1 = (0 - b + sqrt(d)) / (2 * a);
	answer2 = (0 - b - sqrt(d)) / (2 * a);
	printf("Two roots are %f and %f", answer1, answer2);
	
}