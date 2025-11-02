#include<stdio.h>
double circleArea(double);
double triangleArea(double, double);
int main(){
	int input;
	double radius, base, height;
	printf("--- Area Calculator ---\n");
	printf("1. Circle\n");
	printf("2. Triangle\n");
	printf("3. Exit\n");
	printf("-------------------------------\n");
	while(1){
		printf("Enter your choice (1-3): ");
		scanf("%d",&input);
		switch (input){
			case 1:
				printf("Enter the radius of the circle: ");
				scanf("%lf", &radius);
				printf("The area of the circle is: %.2lf\n",circleArea(radius));
				break;
			case 2:
				printf("Enter the base of the triangle: ");
				scanf("%lf",&base);
				printf("Enter the height of the triangle:");
				scanf("%lf",&height);
				printf("The area of the triangle is: %.2lf\n", triangleArea(base, height));
				break;
			case 3:
				printf("Exiting program.\n");
				break;
			default:
				printf("Invalid choice. Please enter a number between 1 and 4.\n");
				break;
				
		}
		if(input==3){
			break;
		}
	}
	
	return 0;
}

double circleArea(double radius){
	return radius * radius * 3.14;
}

double triangleArea(double base, double height){
	return base * height / 2.0;
}
