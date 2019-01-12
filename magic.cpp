#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
	lli n, s, x;
	lli t;
	cin>>t;
	while(t--){
		cin>>n>>x>>s;
		lli a, b, flag=x;
		for(lli i=0; i < s; i++){
			cin>>a>>b;
			if(a==flag) flag = b;
			else if(b==flag) flag = a;
		}
		cout<<flag<<endl;
	}
	return 0;
}