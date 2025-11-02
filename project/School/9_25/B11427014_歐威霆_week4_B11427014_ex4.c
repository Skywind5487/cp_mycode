#include<stdio.h>
int main(){
	int row, col;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of colummns: ");
    scanf("%d", &col);
    printf("\nClassroom Seating Chart\n\n");
    int i, j;
    for(i=0;i<row;i++){
    	for(j=0;j<col;j++){
    		printf("Seat(%d, %d)\t", i+1, j+1);
    	}
    	printf("\n");
    }
	return 0;
}