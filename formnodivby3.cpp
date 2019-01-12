#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin>>n;
	int h[10]={};
	string a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		for(int j=0; j<a[i].length(); j++){
			int t = a[i][j]-'0';
			h[t]++;
		}
	}
	int sum=0;
	for(int i=0; i<10; i++){
		if(h[i]>0){
			sum+=i*h[i];
		}
	}
	if(sum%3==0) cout<<1;
	else cout<<0;

}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
