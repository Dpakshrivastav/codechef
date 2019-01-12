#include<bits/stdc++.h>
using namespace std;


void solve(){
	string s; cin>>s;
	int i = s.length()-1;
	int temp = -1;
	while(i>0){
		if(s[i]=='1'){
			temp = i;
			break;
		}
		i--;
	}
	cout<<temp;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
