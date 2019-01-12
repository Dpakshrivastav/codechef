#include<bits/stdc++.h>
using namespace std;
#define bit 32

void solve(){
	int n; cin>>n;
	string s[bit], a[bit];
	for(int i=0; i<bit; i++){
		s[i]="0";	
	}
	int count=0;
	while(n>0){
		s[count] = to_string(n%2);
		n=n/2;
		count++;
	}
	long long int sum=0;
	for(int i=0; i<bit; i++){
		if(s[i]=="1") sum+=pow(2, bit-(i+1));
	}
	cout<<sum<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}