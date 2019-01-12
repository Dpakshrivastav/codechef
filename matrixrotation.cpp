	#include<bits/stdc++.h>
using namespace std;
#define lli long long int


void solve(){
	int n; cin>>n;
	// int n; cin>>n;
	int a[n][n];
	int b[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) {
				cin>>a[i][j];			
		}
	}
	for(int i=n-1; i>=0; i--){
		for(int j=n-1; j>=0; j--) {
				cout<<a[i][j]<<" ";			
		}
		cout<<endl;
	}

}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		// cout<<endl;
	}
}
