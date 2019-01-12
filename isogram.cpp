#include<bits/stdc++.h>
using namespace std;


void solve(){
	// int n; cin>>n;
	string s;
	unordered_map<char, int> u;
	cin>>s;
	for(int i=0; i<s.length(); i++) {
		u[s[i]]+=1;
	}
	bool b = false;
	for(auto x:u){
		if(x.second > 1) b=true;
	}
	if(!b) cout<<1;
	else cout<<0;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
