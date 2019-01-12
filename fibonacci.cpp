#include<bits/stdc++.h>
using namespace std;


void solve(){
	long long int n; cin>>n;
	long long sum=0;
	long long int a=0;
	long long int b=1;
	if(n==1) cout << a<<" ";
	else if (n==2) cout <<a<<" "<<b<<" ";
	else cout <<a<<" "<<b<<" ";
	{
		while(true){
			sum = a + b;
			if(sum<=n) cout<<sum<<" ";
			else return;
			a = b;
			b = sum;
		}
	}
	
	return;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}