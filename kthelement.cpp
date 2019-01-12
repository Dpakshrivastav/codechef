#include<bits/stdc++.h>
using namespace std;


void merge(int a[], int b[], int m, int n, int k){
	int i=0;
	int j=0;
	int p=0;
	int r[m+n];
	while(i<m && j<n && p<=k){
		if(a[i]<b[j])r[p++] = a[i++];
		else r[p++] = b[j++];
	}
	while(i<m && p<=k) r[p++] = a[i++];
	while(j<n && p<=k) r[p++] = b[j++];
	cout<<r[k-1]<<" "; return;
}


void solve(){

	int m, n, k; cin>>m>>n>>k; int a[m], b[n];
	for(int i=0; i<m; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	merge(a, b, m, n, k);
		
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
