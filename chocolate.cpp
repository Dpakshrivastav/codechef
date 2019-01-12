#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back

void solve(){
	
	lli n; cin>>n;
	lli a[n];
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	sort(a, a+n);
	lli k; cin>>k;
	if(n<=1){ cout<<(0); return;}
	lli min = LLONG_MAX;
	lli temp=0;

	for(int i=0; i < sizeof(a)/sizeof(a[0]); i++){
		int t = i + k -1;
		if(t>n-1) break;
		if(min > a[t]-a[i]) min = a[t]-a[i];
	}
	cout<<min;
	
	return;
  
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}