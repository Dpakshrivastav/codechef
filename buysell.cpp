#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin>>n; int p[n]; for(int i=0; i<n; i++) cin>>p[i];
	int i = 0, a = 0, b = 0;
	while(i<n-1){
		while(i<n-1 && p[i+1]<=p[i])
			i++;
		if(i==n-1) break;
		a=i++;
		while(i<n && p[i]>=p[i-1])
		i++;
		b=i-1;
		cout<<"("<<a<<" "<<b<<") ";

	}
	if(a==0&&b==0) cout<<"No Profit";
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}