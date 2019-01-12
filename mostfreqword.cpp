#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin>>n;
	string s[n];
	unordered_map<string, int> u;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	sort(s, s+n);
	for(int i=0; i<n; i++) {
		u[s[i]]+=1;
	}

	int max = u[s[0]];
	int count = 0;
	for(int i=0; i<n; i++){
		if(u[s[i]]>max){ 
			max = u[s[i]];
			count=i;
		}
	}
	// cout<<u["about"];
	auto t = u.find(s[count]);
	cout<<t->first;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}

