#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int p[t], test = t, l = 0;
	while(t--){
		int n;
		cin>>n;
		
		int a[n];
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		int s = a[0], day = 0, j;
		int k = a[0];
		if(a[1]==0) day--;
		for(int i = 1; i <= k; i++)
		{
			s = s + a[i];
			if(i==k||i==n-1){
				day++;
				k = i+s;
			}
			else if(i>=n) break;
		 				
		}
		if (n==1)
		{
			day = 0;/* code */
		}
		p[l++] = day;	
		
}
	l = 0;
	while(test--){
		cout<<p[l++]<<endl;
	} 
  	
}