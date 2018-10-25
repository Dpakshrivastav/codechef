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
		int s = 0, day = 0, j;
		for(int i = 0; i < n; i++)
		{
			if(i<n){
				s = a[i];
			for(j = i+1; j <= a[i]; j++){
				s = s+a[j];
			}
			i =  s+j-2;
			day++;
			}
			else break;
		}
		p[l++] = day;		
	}
	l = 0;
	while(test--){
		cout<<p[l++]<<endl;
	} 
  	
}