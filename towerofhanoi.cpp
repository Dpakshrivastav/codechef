#include <bits/stdc++.h>
using namespace std;

#define pb push_back
int towerofhonoi(int n, int from, int to, int aux, int count){
	if(n==1){
		// count++;
		cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
		return count;
	}
	count = towerofhonoi(n-1, from, aux, to, count+1);
	cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
	count = towerofhonoi(n-1, aux, to, from, count+1);	
}

void solve(){
	int n, count=0; cin>>n;
	count = towerofhonoi(n, 1, 3, 2, count);
	cout<<(count+1)<<endl;
}


int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}