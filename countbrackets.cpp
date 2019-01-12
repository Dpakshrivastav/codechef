#include<bits/stdc++.h>
using namespace std;
#define pb push

void solve(){
	string s; cin>>s;
	stack<char> st;
	int count=1;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='('){	
			st.pb(count);
			cout<<count<<" ";
			count++;
			
		}
		else if(s[i]==')'){
			int x = st.top();
			cout<<x<<" ";
			st.pop();
		}
	}
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
