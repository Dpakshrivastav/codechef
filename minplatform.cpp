#include<bits/stdc++.h>
using namespace std;
#define lli int
#define pb push_back
#define mk make_pair

bool compare(pair<int,char>&a,pair<int,char>&b)
{
    return (a.first< b.first);
}

void solve(){

	lli n;
	scanf("%d", &n);
	lli arrival[n], departure[n];
	for(lli i=0; i<n; i++) scanf("%d", &arrival[i]);
	for(lli i=0; i<n; i++){
	 	scanf("%d", &departure[i]);
	 	if(departure[i]<=arrival[i]) departure[i]+=2400;
	 }
	 sort(arrival, arrival+n);
	 sort(departure, departure+n);

	 int i=0, j=0;
	 int count =0;
	 int count_final=1;

	 while(i<n && j<n){
	 	if(arrival[i]<departure[j]){
	 		count++;
	 		i++;
	 		if(count>count_final)
	 			count_final = count;
	 	}
	 	else{
	 		count--;
	 		j++;
	 	}

	 }
	 cout<<count_final;
	






	// std::vector<pair<int, char>> v;	
	// //int max = INT_MIN;
	// int t=0, res=0, count=0;
	// for(int i=0; i<n; i++){	
	// 	// if(arrival[i]==departure[i]) continue;
	// 	v.pb(mk(arrival[i], 'a'));
	// 	v.pb(mk(departure[i], 'd'));
	// }
	// sort(v.begin(), v.end());
	// for(int i=0; i<v.size(); i++){
		

	// 	if(i<v.size()-1 && v[i].first == v[i+1].first && v[i].second == 'a' && v[i+1].second == 'a') continue;
	// 	if(v[i].first<2359){
	// 		if(v[i].second=='a') count++;
	// 		else count--;
	// 		res = max(res, count);
	
	// 		// cout<<v[i].first<<" "<<v[i].second<<" ";
	// 	// cout<<count<<" "<<res<<endl;
	// 	}
	// }
	// // if(count==0) count+=1;
	// cout<<res;

}

int main(){
	lli t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
