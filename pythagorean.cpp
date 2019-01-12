#include<bits/stdc++.h>
using namespace std;
#define lli int
#define pb push_back
#define mk make_pair

bool check(int h[]){
	for(lli i=0; i<1001; i++){
		for(lli j=i+1; j<1001; j++){
			if(h[i]>0 && h[j]>0){
				int t = (i*i) + (j*j);
				int r = (int)pow(t, 0.5);
				if(t>r*r) continue;
				if(h[r] > 0) return true;
			}
		}
	}
	return false;
}

void solve(){

	lli n;
	scanf("%d", &n);
	lli h[1001]={};
	int a;
	// struct data v[n];
	for(lli i=0; i<n; i++){
		scanf("%d", &a);
		h[a]++;
	}
	bool b = check(h);
	if(b) cout<<"Yes";
	else cout<<"No";

}
int main(){
	lli t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}