#include<stdio.h>	
int main(){
	printf("\\\\Happy\tBirthday\"\n");
	int y, m, d, hr, min;
	y=2025;
	m=9;
	d=11;
	hr=15;
	min=45;
	printf("%d/0%d/%d %d:%d pm\n", y, m, d, hr, min);
	printf("%o/%o/%o %o:%o pm\n", y, m, d, hr, min);
	printf("%x/%x/%x %x:%x pm\n", y, m, d, hr, min);
	return 0;
}
