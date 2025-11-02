#include<stdio.h>
using namespace std;
int main(){
	int n, i, j;
	scanf("%d", &n);
	for (i=0;i<n;i++){
		for(j=0;j<-i+2*n-2+1;j++){
			if (j<i){
				printf("  ");
			}
			else{
				printf("* ");
			}
		}
		printf("\n");
	}
}