#include<stdio.h>
int main(){
	printf("Enter student scores (0~100), enter -1 to stop.\n");
	int input, sum, max, min;
	sum = 0;
	max = -1;
	min = (int) 1000;
	int i, num;
	input = 1;
	num = 0;
	for(i=0;1;i++){
		printf("%d. Enter score (0~100): ", i + 1);
		scanf("%d",&input);
		if(input>100||(input<0&&input!=-1)){
			printf("Invalid score, please 0-100 or -1 to stop.\n");
			continue;
		}
		if (input<0){
			break;
		}
		num++;
		//printf("i: %d\n", i);
		sum += input;
		max = (input>max)? input : max;
		min = (input<min)? input : min;
	}
	printf("\n");
	printf("The number of students: %d\n", num);
	printf("Average: %.1f\n",(float)sum / (float)(num));
	printf("Max score: %d\n", max);
	printf("Min score: %d\n", min);
	return 0;
}
