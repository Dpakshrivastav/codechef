#include <bits/stdc++.h> 
using namespace std; 
#define lli long long int
void solve(){
	int n; cin>>n;
    lli sum = 0;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0; i<n; i++){
        cout<<sum-a[i]<<" ";
    }
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
