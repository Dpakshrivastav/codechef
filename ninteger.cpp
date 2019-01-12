#include<bits/stdc++.h>
using namespace std;
#define lli int
#define pb push_back
#define mk make_pair

void solve(){
	// int div[1000];	
	string a;
	cin>>a;	
	string x="";
	if(a.size()>=3){
		x = a.substr(a.size()-3, 3);
		int t = stoi(x);
		if(t%8==0) cout<<1;
		else cout<<(-1);
	}
	else{
		int t = stoi(a);
		if(t%8==0) cout<<1;
		else cout<<(-1);
	}
}

int main(){
	lli t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}