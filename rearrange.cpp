#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin>>n;
	int a;
	int h[n+1]={};
	for (int i = 0; i < n+1; ++i)
	{
		h[i]=-1;
	}
	for (int i = 0; i < n; ++i){
		cin>>a;
		if(a>=0)
			h[a]++;

	}
	for(int i=0; i<n; i++){
		if(h[i]>=0){
			cout<<i<<" ";
		}
		else cout<<(-1)<<" ";
	}
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
