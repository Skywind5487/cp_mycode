#include<stdio.h>
float to_fahrenheit(float t); //temperture
float to_celsius(float t);
void test();
int main(){
	float a, b;
	printf("Enter the celsius degree: ");
	scanf("%f", &a);
	printf("At fahrenheit, it's %f\n", to_fahrenheit(a));
	printf("Enter the fahrenheit degree: ");
	scanf("%f", &b);
	printf("At celsius, it's %f\n", to_celsius(b));
	test();
	return 0;
}

float to_fahrenheit(float t){
	return t * 9 / 5 + 32;
}

float to_celsius(float t){
	return (t-32)*5/9;
}
void test(){
	int i;
	float t;
	for(i = 0;i<11;i++){
		t = 10 * (i);
		printf("%.1f in celsius is %.2f in farhenheit\n", t, to_fahrenheit(t));
	}
	printf("======\n");
	for(i = 0;i<11;i++){
		t = 10 * (i);
		printf("%.1f in farhenheit is %.2f in celsius\n", t, to_celsius(t));
	}
	return;
}