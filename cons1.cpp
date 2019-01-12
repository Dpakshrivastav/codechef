#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
unsigned long long int printCount(int n){
	if(n == 1) return 2;
	if(n == 2) return 3;
	unsigned long long int a = 2, b = 3, sum;
	for(int i = 0;  i < n-2; i++){
		sum = (a + b)%mod;
		a = b;
		b = sum;
	}
	return sum;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long int num;
		cin>>num;
		cout<<(printCount(num)%mod)<<endl;
	}
	return 0;
}