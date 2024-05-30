//https://apcs.csie.ntnu.edu.tw/wp-content/uploads/2018/12/1050305APCSImplementation.pdf

#include<bits/stdc++.h>
using namespace std;

const int N = 1e8;
int tbl[N];


/*
1. input
2. sort
3. find max <60
no min:best case
4. finf min >=60
no max:worse case

init pos =-1
find pos(first>=60)
no min: pos = 0
no max: pos = -1


broad 1,20
0 100
all pass
no pass

if n=1




output
all
max fail ;best case
min succeed;worst cast


*/





bool comp(const int &a ,const int &b){
	return a < b;
}

int main(){
	
	int pos=-1;
	int n; 
	cin >> n;
	//cout << n;
	
	for(int i = 0 ; i < n ; i++){
		cin >> tbl[i];
	}
	
	sort(tbl,tbl+n,comp);
	
	
	for(int i = 0 ; i < n ; i++){
		if( tbl[i] >= 60 && pos == -1)pos = i;
		cout << tbl[i] << " ";
	}
	
	cout<<"\n";
	
	//max fail ;best case
	if(pos == 0){
		cout << "best case\n";
	}
	else cout << tbl[max(pos-1,0)] << "\n" ;
	//min succeed;worst cast
	
	if(pos == -1){
		cout << "worst case\n";
	}
	else cout << tbl[pos] << "\n";

	
}