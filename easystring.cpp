#include<bits/stdc++.h>
using namespace std;
#define pb push

void solve(){
	string s; cin>>s;
	stack<char> st;
	int count=1;
	for(int i=s.length()-1; i>=0; i--){
		st.pb(s[i]);
	}
	while(!st.empty()){
		char t=st.top();
		st.pop();
		while(!st.empty() && (st.top()==(char)tolower(t) || st.top()==(char)toupper(t))){
				count++;
				st.pop();
		}
		cout<<count<<(char)tolower(t);
		count=1;
		// st.pop();
	}
	
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
