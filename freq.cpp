#include<bits/stdc++.h>
using namespace std;
#define pb push

void solve(){
	int n; cin>>n;
	int a[n];
	unordered_map<int, int> m;
	for(int i=0; i<n; i++){
		cin>>a[i];
		m[a[i]]++;
	}
	int t=0;
	int max = INT_MIN;  
	int min = INT_MAX;
	for(int i=0; i<n; i++){
		if(m[a[i]]<=min && max<a[i]){
		 	min = m[a[i]];
		 	max = a[i];
		 	t=i;
		 }		
	}
	cout<<a[t];

		
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
