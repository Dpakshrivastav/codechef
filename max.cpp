#include <bits/stdc++.h>
using namespace std;
#define lli long long int



void solve(){
	lli n; cin>>n; lli a[n];
	for(lli i=0; i<n; i++){ cin>>a[i];}
	lli max[3];
	int t =0;
	max[0] = a[0];
	max[1] = a[1];
	max[2] = a[2];
	for(lli i = 3; i < n; i++){
	    lli min = max[0];
		if(min>max[1]){ min = max[1]; t=1; }
		else if(min>max[2]){ min = max[2]; t=2; }
		if(a[i] > min){ 
			max[t] = a[i];
			t=0;	
		}
	}
	lli sum = 0;
	for (int i = 0; i < 3; ++i){
		// cout<<max[i];	
		sum+=max[i];
	}
	cout<<sum<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}