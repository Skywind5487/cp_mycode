#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll temp=0;
ll mod=1000000007;
ll ans=1;
ll fp(ll b,ll e){
		if(e==0){
			return 1;
		}
		if(e==1){
			return b%mod;
		}
		if(e&1){
			temp=fp(b,(e-1));
			return ((b%mod)*temp)%mod;
		}
		else{
			temp=fp(b,e/2);
			return (temp*temp)%mod;
		}
}


int main(){
	ll n,k=0,t;
	cin>>n>>k;
	if(k<3&&n>k){
		cout<<0;
	}
	else{
		if(n==1)cout<<k;
		if(n==2)cout<<k*(k-1);	
		if(n>=3){
			
			t=fp((k-2)%mod,n-3);
			//cout<<"t="<<t<<"\n";
			ans=(k%mod*(k-1)%mod*(k-2)%mod*t%mod)%mod;
			cout<<ans;
		}
	}
	
	
}