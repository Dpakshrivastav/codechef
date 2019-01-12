#include <bits/stdc++.h> 
using namespace std; 

bool isPrime(int n) 
{ 
    // Corner case 
    if(n==0)
    	return false;
    if (n == 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 

void solve(){
	int n; cin>>n;
	// int n; cin>>n;
	if(isPrime(n-1) && isPrime(n+1)) cout<<"Yes";
	else cout<<"No";
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
