#include<bits/stdc++.h>
using namespace std;


int nextGreater(int a[], int index, int n){
	for(int i=index+1; i<n; i++)
		if(a[i]>a[index]) return a[i];
		else continue;
	return 0;
}

void solve(){
	int n;cin>>n; 
	stack <int> s;
	int a;
	for(int i=0; i<n; i++) {
		cin>>a;
		s.push(a);
	}
	// cout<<s.size();
	stack <int> s1;
	s1.push(0);
	while(!s.empty()) {
		s1.push(s.top());
		// cout<<s1.top()<<endl;
		s.pop();
		// s1.pop();
	}
	int t = s1.top();
	s1.pop();
	long long int sum=0;
	while(!s1.empty()){
		if(t>s1.top()){
			s1.pop();
			s1.push(s1.top());
		}
		t=s1.top();
		cout<<t<<endl;
		s1.pop();
		sum+=t;
	}
	cout<<sum<<endl;
	
	
}
	// // cout<<s.size()<<" "<<s1.size();


	// for(int i=1; i<n; i++){
	// 	if(t<s.top()) t=s1.top();
	// 	s1.pop();
	// 	sum+=t;
	// }


	// int sum = 0;
	// int max = 0;
	// for(int i=0; i<n; i++){
	// 	max = nextGreater(a, i, n);
	// 	sum+=max;	
	// }
	//cout<<(n-1)*(10-w)<<endl;


int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}