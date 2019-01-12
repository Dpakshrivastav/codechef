#include<bits/stdc++.h>
using namespace std;
#define pb push

void solve(){
	int n; cin>>n;
	int a[n];
	// stack<int> s;
	// std::vector<int> v;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	bool b = false;
	for(int i=0; i<n; i++){
		int j = i+1;
		while(j<n){
			if(a[j]>a[i]) b=true;
			j++;
		}
		if(!b) cout<<a[i]<<" ";
		else b=false;
	}
	
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
