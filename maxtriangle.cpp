#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n; cin>>n; int a[n], max=-1;
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n, greater<int>());
	for(int i=0; i<n-2; i++){
		if(a[i]+a[i+1]+a[i+2]>max && a[i] + a[i+1] > a[i+2] && a[i+1] + a[i+2] > a[i] && a[i] + a[i+1] > a[i+2])
			max = a[i] + a[i+1] + a[i+2];
	}
	cout<<max;	
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
