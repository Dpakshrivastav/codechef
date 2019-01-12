#include<bits/stdc++.h>
using namespace std;
#define pb push

void solve(){
	int n; cin>>n;
	int a[n];
	stack<int> s;
	std::vector<int> v;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=n-1; i>=0; i--){
		s.push(a[i]);
	}
	//sort(a, a+n, greater<int>());
	while(!s.empty()){
		int t1 = s.top();
		s.pop();
		// int t2 = ;//
		if(!s.empty() && t1>s.top()) v.push_back(s.top());
		else v.push_back(-1);
	}
	for(auto i : v){
		cout<<i<<" ";
	}	

}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
