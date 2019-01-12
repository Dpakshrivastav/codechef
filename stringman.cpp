#include<bits/stdc++.h>
using namespace std;
#define pb push

void solve(){
	int n; cin>>n;
	// string s; 
	stack<string> st;
	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		st.pb(s);	
	} 
	int count=0;
	string t1=st.top();
	st.pop();	
	while(!st.empty()){
		string t2=st.top();
		st.pop();
		if(t1==t2) count--;
		t1=t2;
		count++;
	}
	cout<<count;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
