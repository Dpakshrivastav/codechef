	#include<bits/stdc++.h>
using namespace std;
#define lli long long int


void solve(){
	int n, x; cin>>n>>x;
	int a;
	int b;
	unordered_map<int, int>ha, hb;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) {
				cin>>a;
				ha[a]++;				
		}
	}
	int count=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) {
				cin>>b;
				hb[b]=1;
				if(ha[x-b])
					count+=ha[x-a];
		}
	}
	cout<<count;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
