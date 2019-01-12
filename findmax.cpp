	#include<bits/stdc++.h>
using namespace std;
#define lli long long int


void solve(){
	string s;
	cin>>s;
	int c=-1,m,n=s.size();
     for(int i=0;i<n;i++)
        {
            int m=s.find_last_of(s[i]);
             if(m!=i)
               if((m-i-1)>c)
                 c=m-i-1;
        }
        cout<<c<<endl;
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
