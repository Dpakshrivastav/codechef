#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, temp=0, p[100], k;
	cin>>t;	
	temp=t;
	while(temp--){
		cin>>n;
		k=0;
   		for (int i=2; i<100; i++) 
        	for (int j=2; j*j<=i; j++)
            		if (i % j == 0) 
                		break;
            		else if (j+1 > sqrt(i)){
            			p[k] = i;
        				cout<<p[k++];
        			}	
	}
}