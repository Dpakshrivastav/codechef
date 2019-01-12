#include<bits/stdc++.h>
using namespace std;


void solve(){
	char n; cin>>n;
	int u, l; cin>>l>>u;
	int r=u-l-1;
	string a[r];
	int count=0;
	for(int i=l+1; i<u; i++)
		a[count++] = to_string(i);
	int t=0;
	for(int i=0; i<count; i++)
		for(int j=0; j<a[i].length(); j++)
			if(a[i][j]==n){
				t++;
				// cout<<a[i]<<endl;
			//	break;
			}
	cout<<t<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}