#include<bits/stdc++.h>
using namespace std;


void solve(){
	// int n; cin>>n;
	int h[10]={};
	string a;
	cin>>a;
	int l=0;
	int n = a.length();
	int r=a.length()-1;
	int sumleft=0, sumright=0;
	while(l<(n+1)/2 || r>(n+1)/2){
		sumleft+=int(a[l++]-'0');
		sumright+=int(a[r--]-'0');
	}
	if(sumleft==sumright) cout<<1;
	else cout<<0;
	

}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
