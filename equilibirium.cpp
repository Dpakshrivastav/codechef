#include<bits/stdc++.h>
using namespace std;
#define lli int
#define pb push_back
#define mk make_pair

void solve(){

	lli n;
	scanf("%d", &n);
	int a[n];
	// struct data v[n];
	for(lli i=0; i<n; i++) scanf("%d", &a[i]);
	int sumleft = 0, sumright = 0;
	// bool b = false;
	int l=0, r=n-1;
	while(l<r){
		if(sumleft<sumright) sumleft += a[l++];
		else if(sumright<sumleft) sumright += a[r--];
		else sumleft+=a[l++];
	}
	if(sumleft == sumright) cout<<l+1;
	else cout<<(-1);
}
int main(){
	lli t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}