#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void solve(){
	int n; cin>>n;
	lli h[n+1]={};
	lli a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
		h[a[i]] = h[a[i]-1]+1;
	}
	int max=0;
	for (int i = 1; i < n+1; ++i){
		if(max<h[i]) max=h[i];
	}
	cout<<n-max;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
