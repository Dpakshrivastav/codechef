#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back

void solve(){
	lli n; cin>>n;
	std::vector<lli> even;
	std::vector<lli> odd;
	lli a;
	for(int i=0; i<n; i++){
		cin>>a;
		if(a%2 == 0) even.pb(a);
		else odd.pb(a);
	}
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());
	
	for (auto ir = odd.rbegin(); ir != odd.rend(); ++ir) 
        cout << *ir << " "; 

	for (auto i = even.cbegin(); i != even.cend(); ++i) 
        cout << *i << " "; 
  
  
	// for (int i = 0; i < odd.size(); ++i)
	// {
	// 	cout<<odd[i]<<" ";
	// 	/* code */
	// }
	// for (int i = 0; i < even.size(); ++i)
	// {
	// 	cout<<even[i]<<" ";
	// 	/* code */
	// }
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}