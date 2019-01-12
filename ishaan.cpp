#include<bits/stdc++.h>
using namespace std;

bool check( std::vector<int> &v, int count, int n){
	for(int i=0; i<n; i++){
		// cout<<sums[i]<<" "<<count<<endl;
		if(v[i]==count){
		 	return true;
		 }
	}
	return false;
}

void solve(){
	int n; cin>>n; string a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int count=0, k=0;
	std::vector<int> v(n);
	v[0]=0;
	for(int i=0; i<n; i++){
		count = 0;
		for(int j=0; j<a[i].length(); j++){
			count += ((int)a[i][j]-48);		
		}
		// cout<<count<<endl;
		if(!check(v, count, n)){
			v[k]=count;
			// cout<<v[k]<<" "<<count<<endl;
			k++;
		}
	}
	cout<<(k);

}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
