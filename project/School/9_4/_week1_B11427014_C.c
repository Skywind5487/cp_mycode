#include<stdio.h>
using namespace std;
int main(){
	int i, i2, j, k;
	for (i=0; i<9;i++){
		i2 = i-4;
		if (i2 <0){
			i2 = -i2;
		}
		for(j=0;j<-i2+4;j++){
			printf(" ");
		}
		printf("%d",i+1);
		for(j=0; j < 2 *i2 - 1;j++){
			printf(" ");
		}
		if (i!=4){
			printf("%d",i+1);
		}
		printf("\n");
	}
}