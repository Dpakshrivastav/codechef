#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

void solve(){
	int n; cin>>n;
	long long int temp = 7;
	for(int i=1; i<n; i++){
		temp = temp*2 + (i);
		temp %=mod;
	}
	cout<<temp<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}