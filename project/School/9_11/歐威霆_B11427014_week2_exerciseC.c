#include<stdio.h>
int main(){
	unsigned int second;
	scanf("%d", &second);
	int sec, min, hr;
	sec = second 
	% 60;
	second /= 60;
	min = second % 60;
	second /= 60;
	hr = second;
	printf("%d hr %d min %d sec\n", hr, min, sec);
	return 0;
}
