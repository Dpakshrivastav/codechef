#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n, w; cin>>n>>w; int a[n], avg[n], index[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
		avg[i]=(w+a[i])/2;
	}
	for (int i = 0; i < n; ++i)
	{
		int count = 0;
		for(int j = 0; j<n; j++) 
			if(avg[i]==a[j])
				count++;
		index[i]=count;
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<index[i]<<" ";
		/* code */
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}