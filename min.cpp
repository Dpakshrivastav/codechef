#include <bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin>>n; int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int min = INT_MAX;
	for(int i = 0; i<n; i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	cout<<min<<endl;
}


int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}

