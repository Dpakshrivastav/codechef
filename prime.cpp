#include <bits/stdc++.h> 
using namespace std; 

bool isPrime(int n) 
{ 
    // Corner case 
    if (n == 1) 
        return true; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
// Driver Code 
int main() 
{ 
	int t;
	cin>>t;
	int test = t;
	int a[t], l=1;
	while(t--){
		bool b = false;
		int n, count = 1;
		cin>>n;
		array<int,100> p; 
    	for (int i = 2; i <= n; i++) { 
        	if (isPrime(i)) 
            {
            	p[count++] = i;
            } 
    	}
    	int temp = 0;
    	int k=1, m[1000];	
		for (int i = 1; i < count; i++)
			{
				for (int j = i; j < count; j++)
				{	
					temp = p[i]*p[j+1];
					if(temp < n) m[k++] = temp;
				}
			}
		for(int i = 1; i<k; i++)
			for(int j = i; j<k; j++)
				if(m[i]+m[j]==n){
					b = true;
					break;
				}
		if (b)
			a[l++]=1;	
		else a[l++]=0;
    } 
    for (int i = 1; i < l; ++i)
    {
    	if (a[i]==1)
    	{
    		cout<<"YES"<<endl;/* code */
    	}
    	else if (a[i]==0)
    	{
    		cout<<"NO"<<endl;/* code */
    	}
    }
}
