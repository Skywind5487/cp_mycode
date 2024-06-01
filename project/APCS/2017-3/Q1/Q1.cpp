//https://apcs.csie.ntnu.edu.tw/wp-content/uploads/2018/12/1050305APCSImplementation.pdf
//https://zerojudge.tw/ShowProblem?problemid=b964
#include<bits/stdc++.h>
using namespace std;

//const int N = 1e8;
//int tbl[N];


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
max fail   ;best case
min succeed;worst cast


*/
/*

輸入
分兩個陣列
先輸出再輸出
計算陣列的量後輸出




*/




bool comp(const int &a ,const int &b){
	return a < b;
}

int main(){
	int n;
	cin>>n;
	vector<int> low,high;
	int temp;
	for(int i = 0; i<n ;i++){
		cin>>temp;
		if(temp >= 60){
			high.push_back(temp);
		}
		else low.push_back(temp);
	}
	sort(high.begin(),high.end(),comp);
	sort(low.begin() , low.end(),comp);
	for(int i = 0 ; i < low.size(); i++){
		cout<< low.at(i) << " ";
	}
	for(int i = 0 ; i < high.size(); i++){
		cout<< high.at(i) << " ";
	} 
	cout << "\n";
	if(low.empty()){
		cout << "best case" << "\n";
	}
	else cout << low.back() << "\n";
	if(high.empty()){
		cout << "worst case" << "\n";
	}
	else cout <<high.front() << "\n";
}