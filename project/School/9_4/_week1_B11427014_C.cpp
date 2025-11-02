#include<iostream>
using namespace std;
int main(){
	int i, i2, j, k;
	for (i=4; i>-5;i--){
		i2 = i;
		if (i2 <0){
			i2 = -i2;
		}
		for(j=0;j<5-i2-1;j++){
			cout << " ";
		}
		cout << 10 - (i + 5);
		for(j=0; j < 2 *i2 -2 + 1;j++){
			cout << " ";
		}
		if (i!=0){
			cout << 10 - (i + 5);
		}
		cout << "\n";
	}
}