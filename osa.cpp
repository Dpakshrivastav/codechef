#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n; cin>>n; int a[n], flag=0;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i+=2){
		if(a[i]!=a[i+1]){
			cout<<a[i];
			return;
		}
	}	
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
