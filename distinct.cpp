#include <bits/stdc++.h>
using namespace std;
int check(long long int m){
  if(m<=1)
      return 0;
  if(m<=3)
      return 1;
  if(m%2==0 || m%3==0)
      return 0;
  for(int i=5;i*i<=m;i+=6){
      if(m%i==0 || m%(i+2)==0)
          return 0;
  }
  return 1;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n;
        int ans;
        long long int x = floor(sqrt(n));
        m = ceil(sqrt(n));
        if(floor(x)!=ceil(x))
          ans=0;
        else{
            ans = check(m);
        }
        cout<<ans<<endl;
    }
  return 0;
}