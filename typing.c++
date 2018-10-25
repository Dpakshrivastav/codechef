#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		float sum;
		int flag=-1;
		char c[2] = {'\0', '\0'};
		cin>>n;
		string a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		for(int i = 0; i < n; i++){
			if(a[i][1] == 'd'||a[i][1] == 'f') flag = 0;
			else flag = 1;
			if(flag == 0){ c[0] = 'd'; c[1] = 'f'; }
			else { c[0] = 'j'; c[1] = 'k'; } 
			for(int j = 0; j < sizeof(a[i]); j++){
			 	if(a[i][j]==c[0]||a[i][j]==c[1]) sum+=0.4;
			 	else sum+=0.2;
			 }
		}
		 cout<<sum;
	}
}