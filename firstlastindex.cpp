#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n; cin>>n; int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int k; cin>>k;
	int i=0;
	int j = n-1;
	bool temp = false;
	while(i<n){
		if(a[i] == k){ 
			temp = true;
			break;
		}
		i++;
	}
	while(j>=0){
		if(a[j] == k){
		 	temp = true;
		 	break;
		}
		j--;
	}
	if(temp)cout<<(i)<<" "<<(j);
	else cout<<(-1);
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
