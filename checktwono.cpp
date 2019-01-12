#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin>>n;
	int m; cin>>n;
	int s[1000];
	int p[1000];
	int i=0, j=0;
	while(n>1){
			s[i]=n%2;
			n=n/2;
			i++;
	}
	// cout<<s[0];
	int t= i-1;
	while(m>1){
		p[j]=m%2;
		m=m/2;
		j++;
	}
	for(i=0; i<t+1; i++){
		cout<<s[i];
	}
	cout<<endl;
	int h1[2]={}, h2[2]={};
	for(int i=0, j=0; i<sizeof(s)/sizeof(s[0]) || j<sizeof(p)/sizeof(p[0]); i++, j++){
		if(i<sizeof(s)/sizeof(s[0]))
			h1[s[i]]++;
		if(j<sizeof(p)/sizeof(p[0]))
			h2[s[j]]++;
	}
	cout<<h1[0]<<" "<<h2[0];
	if(h1[0]==h2[0] && h1[1]==h2[1]) cout<<1;
	else cout<<0;
}

int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}


