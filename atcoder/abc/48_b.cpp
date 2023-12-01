#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
	ll a,b,x;
	cin>>a>>b>>x;
	ll temp,ans=0;

	
	if (a==b&&a%x==0){

		cout<<1;
		return 0;
	}
	if(a!=0)a--;
	else ans++;
	ans+=b/x-a/x;
	if(b==0)ans++;
	cout<<ans<<"\n";
	
}
