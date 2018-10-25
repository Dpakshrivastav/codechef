#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin<<t;
	while(t--){
		int n;
		cin<<n;
		double a[n], b[n], temp[n];
		for(int i=0; i<n; i++) cin<<a[i]<<b[i];
		//search index
		for (int i = 0; i < n; i++)
		{
			if(a[i]>b[i]) b = false;
			else if(a[i]==b[i]) continue;
				
			//add index

		}		
	}
}