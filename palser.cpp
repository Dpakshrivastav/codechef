#include<bits/stdc++.h>
using namespace std;


void solve(){
	string s; cin>>s;
	int i = 0;
	int temp = -1;
	string p=s;
	int count=0;
	while(i<s.length()){
		p[i] = (char)(s[i]+49);
		//cout<<p[i]<<" ";
		count += ((int)s[i]-48);
		//cout<<count<<" ";
		i++;
	}
	// cout<<(count);
	char ps[count];
	int j=0;
	for (int i = 0; i < count; ++i){
		if(j==p.length()) j=0;
		ps[i]=p[j];
		j++;	
	}
	i=0;
	j=count-1;
	bool b = true;
	while(i<j){
		if(ps[i]!=ps[j]){
			b = false;
			break;
		}
		i++;
		j--;
	}
	if (b) cout<<"YES";
	else cout<<"NO";


}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
