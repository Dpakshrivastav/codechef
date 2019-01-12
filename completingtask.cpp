#include<bits/stdc++.h>
using namespace std;
#define lli long long int


void solve(){
	int n, m; cin>>n>>m;
	int a[m];
	// int h[100001]={};
	int h[n+1]={};
	for(int i=0; i<m; i++){
		cin>>a[i];
		// h[a[i]]++;
	}
	// sort(a, a+m);
	for(int i=0; i<m; i++){
		// cin>>a[i];
		h[a[i]]++;
	}
	


	int tanya[n];
	int manya[n];
	bool temp = false;
	int j=0, k=0;
	for(int i=1; i<=n; i++){
		if(h[i]==0 && !temp){
			tanya[j++] = i;
			temp=!temp;
		}
		else if(h[i]==0 && temp) {
			manya[k++] = i;
			temp=!temp;
		}
	}
	bool b=false;
	for(int i=0; i<j; i++){
		cout<<tanya[i]<<" ";
		b =true;
	}
	cout<<endl;
	for(int i=0; i<k; i++){
		cout<<manya[i]<<" ";
	}
	// if(!b) cout<<endl;

}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
