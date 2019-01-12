#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; char d; cin>>n>>d;
	string a[n+1];
	int count=0;
	string s(1, d);
	int t = stoi(s);
	if(t>n) {cout<<(-1)<<endl; return;}
	for(int i=0; i<=n; i++)
		a[i] = to_string(i);

	for(int i=0; i<=n; i++)
		for(int j=0; j<a[i].length(); j++)
			if(a[i][j]==d){
				cout<<a[i]<<" ";
				// cout<<a[i]<<endl;
				break;
			}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}