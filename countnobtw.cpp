#include<bits/stdc++.h>
using namespace std;
#define lli long long int


void solve(){
	int n; cin>>n;
	int a[n];
	// int h[100001]={};
	// int h[100001]={};
	// std::map<int, int> h;
	for(int i=0; i<n; i++){
		cin>>a[i];
		// h[a[i]] = i;
	}
	int num1, num2; 
	cin>>num1>>num2;
	int l=0, r=n-1;
	bool b1=true, b=true;
	while((b || b1) && (l<n && r>=0)){
		if(b && a[l++] == num1){
			b=false;
		}
		if(b1 && a[r--] == num2){
			b1=false;
		}
	}
	cout<<r-l+1;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
