#include<bits/stdc++.h>
using namespace std;


void solve(){
	string s; cin>>s;
	unordered_map<int, int> h;
	int ans = 0, one=0, zero=0;
	h[0]=-1;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='0') zero++;
		else one++;
		if(h.find(zero-one)!=h.end()) ans = max(ans, i-h[zero-one]);
		else h[zero-one]=i;
	}	
	cout<<ans;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
