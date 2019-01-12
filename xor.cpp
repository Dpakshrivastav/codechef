#include<bits/stdc++.h>
using namespace std;
#define pb push

void solve(){
	string s;	
	cin>>s;
	bool b=true;
	for(int i=0;  i<s.length(); i+=2){
		if(s[i]==s[i+1]){
			b=false;
		}
	}
	if(b) cout<<"yes";
	else cout<<"no";

}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
