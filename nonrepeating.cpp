#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void solve(){
	int n; cin>>n;
	unordered_map <lli, int> h;
	lli a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
		h[a[i]]++;
	}
	for(int i=0; i<n; i++){
		if(h[a[i]]==1){
			auto x = h.find(a[i]);
			cout<<x->first;
			return;
		}
	}
	cout<<0;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
