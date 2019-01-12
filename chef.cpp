// DEEPAK SHRIVASTA
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fo(i, n) for(lli i=0; i < n; i++)
#define m main()
#define it int
#define cn cin
#define co cout
it m{
	it t;
	cn>>t;
	while(t--){
		lli n, k;
		cn>>n>>k;
		it a[n];
		lli x=0;
		fo(i, n){
			cn>>a[i];
			if(a[i]==1) x++;
		}
		if(x+k>=n) co<<"YES"<<endl;
		else co<<"NO"<<endl;
	}
}	
































// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		lli n, k, sum=0, pro=0;
// 		cin>>n>>k;
// 		bool flag = false;
// 		int a[n];
// 		for(lli i=1; i <=n; i++)
// 			cin>>a[i];
// 		for(lli p = 1; p <=k; p++){
			
// 			for (int i = 1; i <= 10; i++)
// 			{
// 				a[p]=temp;
// 				a[p]=i;
// 				for(lli j = 1; j<=n; j++){
// 					sum+=a[j];
// 					pro+=(a[j]*a[j]);
// 				}
// 				if(pro<=sum){
// 					flag=true;
// 					break;
// 				}
// 			}
// 			if(flag) break;
// 		}
// 		if(flag) cout<<"YES"<<endl; else cout<<"NO"<<endl;
// 	}
// }