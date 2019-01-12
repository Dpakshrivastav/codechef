#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin>>n;
	int a[n], b[n];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	sort(a, a+n);
	sort(b, b+n);
	bool flag = false;
	for(int i=0; i<n; i++){
		if(b[i]<a[i]){ flag=true; break;}
		//cout<<a[i]<<" "<<b[i]<<endl;
	}
	if(flag) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}