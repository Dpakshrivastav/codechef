#include<bits/stdc++.h>
using namespace std;
#define lli int


void solve(){

	lli n, k;
	scanf("%d", &n);
	lli a[n];
	for(lli i=0; i<n; i++){
		scanf("%d", &a[i]);
		// printf("%d", a[i]);
	}
	scanf("%d", &k);
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i=0; i<n; i++){
		if(max<a[i]) max = a[i];
		if(min>a[i]) min = a[i];
	}
	int h[max+1]={};
	for(int i=0; i<n; i++){
		h[a[i]]++;
	}
	int count=0, i=0;
	for(i=min; i<max+1; i++){
		if(count<k && h[i]>0){
			count++;
		}
		if(count==k) break;
		// else return;
	}
	cout<<i;
}

int main(){
	lli t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
