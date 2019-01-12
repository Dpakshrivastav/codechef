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
	int d; cin>>d;
	for(int i=d; i<n; i++){
		cout<<a[i]<<" ";
	}
	for(int i=0; i<d; i++){
		cout<<a[i]<<" ";
	}
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
