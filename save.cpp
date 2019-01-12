#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
        cin>>a[i];
      long long int sum=0;int i=0;
       stack<int> s;
       int ans[n]={};
       s.push(0);
       while(s.empty()==0 && i<n-1)
       {
           i++;
           while( a[s.top()]<a[i])
           {
               ans[s.top()]=a[i];
               s.pop();
               if(s.empty()) break;
           }
           s.push(i);
       }
       for(int i=0;i<n-1;i++){
       	cout<<ans[i]<<endl;
         sum+=ans[i];
       }
        cout<<sum%(1000000001)<<endl;
	
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}