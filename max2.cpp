#include <bits/stdc++.h>
using namespace std;
#define lli long long int

void solve(){
	lli n; scanf("%lld", &n); lli a[n];
	for(lli i=0; i<n; i++){ scanf("%lld", &a[i]);}
	lli sum=0;
	for (int i = 0; i < 3; ++i)
	{
		lli t = a[0], count = 0;
		for (int j = 1; j < n; ++j)
		{
			if(a[j]>t){
				t=a[j];
				count = j;
			}
		}
		a[count] = LLONG_MIN;
		sum+=t;
	}
	cout<<sum<<endl;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		solve();
	}
}