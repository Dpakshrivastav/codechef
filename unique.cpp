#include <bits/stdc++.h>
using namespace std;

#define lli long long int 
#define pb push_back

void solve(){
	lli n; cin>>n;
	lli a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	lli temp = a[0];
	lli count = 1;
	for(int i = 1; i<n; i++){
		if(a[i]==temp) continue;
		temp = a[i];
		count++;
	}
	cout<<count<<endl;
}


int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}