#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back 
#define mod 100000007
#define pf pop_front
list<list<lli>> a;

void C(lli n,lli step, lli cnt, list<lli>v,lli k){
    if (cnt>n||step>n)
    {
    	return;
    }
    if (cnt == n){
        if (v.size() == k)
        	a.pb(v); 
        return;
    }
    else{
        v.pb(step);
        C(n, step+1, cnt + step, v, k);
        v.pf();
        C(n, step + 1, cnt, v, k);
    }
}
int main(){
	int t;
	cin>>t;	
	// t = int(input())
	while(t--){
		// for i in range(0, t):
		lli n, k;
		cin>>n>>k;
		list<lli>v;
		// lis = list(map(int,input().split()))
		// n = lis[0]
		// k = lis[1]
		C(n, 1, 0,v, k);
		lli pro = 1;
		list<lli>p;
		for(list<list<lli>>::iterator it = a.begin(); it!=a.end(); it++){
			if(it.size()==k){
				for(list<lli>::iterator itt = it.begin(); itt!=end(); itt++){
					l=l;
					m=l*l*mod;
					pro = ((m-l)*pro)*mod;
				}
				p.pb(pro);
				pro = 1;
			}
		}
		bool comp(int a, int b) { 
    		return (a < b); 
		}
		lli max = max(p, comp)
		(max>0) ? cout<<max<<endl; : cout<<-1<<endl;
		}

}
