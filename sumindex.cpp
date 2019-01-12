#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin>>n; 
	int a[n];
	int b[n];
	int c[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}	
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	// unordered_set<int> p;
	for(int i=0; i<n; i++){
		cin>>c[i];
		// p.insert(c[i]);
	}	
	unordered_set<int> s;
	for(int i=0; i<n; i++){
		s.insert(c[i]);
	}
	int count=0;
	// unordered_set<int> :: iterator j;
	for(int i=0; i<n; i++){
		if(s.find(a[i]-b[i])!=s.end()) {
			// p.insert(c[i]);
			count++;
			// cout<<c[i]<<" ";
		}
	}	
	// cout<<endl;
	// cout<<p.size();
	cout<<count;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
