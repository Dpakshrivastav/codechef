#include<bits/stdc++.h>
using namespace std;

int power2(int n){
	int p = (int)(log(n)/log(2));
	return pow(2, p);
}

void solve(){
	int n; cin>>n;
	cout<<(((n-power2(n))*2)+1)<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}