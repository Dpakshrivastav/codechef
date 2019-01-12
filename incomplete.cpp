#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin>>n; int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}	
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i=0; i<n; i++){
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	int h[max+1]={};
	for(int i=0; i<n; i++){
		h[a[i]]++;
	}	
	int c=0;
	for(int i=min; i<=max; i++){
		if(h[i]==0) c++;
	}
	cout<<c;	
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
