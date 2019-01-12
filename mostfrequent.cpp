#include<bits/stdc++.h>
using namespace std;


void solve(){
	string s; cin>>s;
	int h[10]={};
	for(int i=0; i<s.length(); i++){
		int y = s[i]-'0';
		// cout<<y;
		h[y]++;
	}	
	// cout<<endl;
	std::vector<int> v;	
	int max = INT_MIN;
	int t=1;

	for(int i = 0; i<=9; i++){
		if(h[i]>0){
			if(h[i]>=max){
				max=h[i];
				t=i;
			}
//			cout<<h[i]<<" "<<i<<" "<<max<<endl;
		}
	}
	cout<<t;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
