#include<stdio.h>
int isLeapYear(int year);
int isValidDate(int year, int month, int day);

int main(){
	printf("Enter year, month, day (yyyy mm dd): ");
	int year, month, day;
	scanf("%d %d %d", &year, &month, &day);
	if(isValidDate(year, month, day)){
		printf("Valid.\n");	
	}
	else{
		printf("Invalid.\n");
	}
}

int isLeapYear(int year){
	return (year%400==0||(year%100==0&&year%4!=0));
}
int isValidDate(int year, int month, int day){
	int days[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(isLeapYear(year)){
		days[2]=29;
	}
	return day>0&&day<=days[month];
}
