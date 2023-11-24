#include<bits/stdc++.h>
using namespace std;
struct Data{
	int x,y;
};
bool compData(const Data &a,const Data &b){
	return a.x<b.x;
}


int main(){
	Data arr[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i].x>>arr[i].y;	
	}
	sort(arr,arr+n,compData);
	for(int i=0;i<n;i++){
		cout<<" "<< arr[i].x<<" "<< arr[i].y<<"\n";	
	}
}
