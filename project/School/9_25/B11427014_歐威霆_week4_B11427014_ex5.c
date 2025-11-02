#include<stdio.h>
int main(){
	//{{{{{{在這裡!!!!{{{{{{{{
	const int password = 2345;
	//}}}}}}}}}}}}}}}}}}}}}}}
	int input;
	while(1){
		printf("Enter password: ");
		scanf("%d", &input);
		if (input == password){
			printf("Access granted\n");
			return 0;
		}
		printf("Wrong password! Try again.\n");
	}
	return 0;
}