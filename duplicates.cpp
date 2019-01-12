#include<bits/stdc++.h>
using namespace std;
#define lli long long int


void solve(){
	int n; cin>>n;
	int a[n];
	int h[100001]={};
	for(int i=0; i<n; i++){
		cin>>a[i];
		h[a[i]]++;
	}
	int min=INT_MAX;	
	int max=INT_MIN;
	for(int i=0; i<n; i++){
		if(a[i]>max) max = a[i];
		if(a[i]<min) min = a[i];
	}
	for(int i=min; i<=max; i++){
		if(h[i]<=0){
			cout<<"No";
			return;
		}
	}
	cout<<"Yes";	
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
