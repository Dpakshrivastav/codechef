#include <bits/stdc++.h>
using namespace std;


int sum(int a[], int i, int j){
	if(j<a[i])
		return a[j]+sum(a,i, j+1);
	else 
		return 0;
}

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
		for(int i = 1; i < n; i++)
		{
				s = s + a[i-1];
				day++;
				i =  i+s+1;
		}
		p[l++] = day;		
	}
	l = 0;
	while(test--){
		cout<<p[l++]<<endl;
	} 
  	
}