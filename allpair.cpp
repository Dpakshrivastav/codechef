#include<bits/stdc++.h>
using namespace std;
#define lli long long int


void solve(){
	int n; cin>>n;
	int a[n];
	// int h[100001]={};
	std::map<int, int> h;
	for(int i=0; i<n; i++){
		cin>>a[i];
		h[a[i]]++;
	}
	bool b = false;
	sort(a, a+n);
	for(int i=0; i<n; i++) 
		if(a[i]>=0 && h[a[i]] == h[-a[i]]){
			cout<<-a[i]<<" "<<a[i]<<" ";
			b = true;
		}	
	if (!b) cout<<0;		/* code */




}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
