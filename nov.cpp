#include <iostream>
using namespace std;

#define lli long long int
#define d 1000000000
int main(){
	int t;
	lli a, b;
	bool flag=false;
	cin>>t;
	while(t--){
		cin>>a>>b;
		lli a1, a2, b1, b2;
		for(lli i = 10; i >= 0; i--){
			a = i-1+a;
			b = i+b;
			a = i+a;
			b = i-1+b;
			if(a==b){ flag = true; cout<<i; break; }
		} 
		if (flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}