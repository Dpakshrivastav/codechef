#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin>>n;
	int sum = (n*(n+1))/2;
	long long int sumsquare = (n*(n+1)*(2*n+1))/6;	
	long long s = pow(sum, 2);
	cout<<(abs(s-sumsquare));
}

int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}


