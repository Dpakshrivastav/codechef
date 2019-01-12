#include<bits/stdc++.h>
using namespace std;
#define lli int
#define pb push_back
#define mk make_pair


void solve(){

	lli n;
	scanf("%d", &n);
	lli a[n];
	// struct data v[n];
	for(lli i=0; i<n; i++)
		scanf("%d", &a[i]);
	int largest_left[n];
	int large = a[0];
	for(lli i=0; i<n; i++){
		if(large<a[i]) large = a[i];
		largest_left[i] = large;
	}
	int largest_right[n];
	large = a[n-1];
	for(lli j=n-1; j>=0; j--){
		if(large<a[j]) large = a[j];
		largest_right[j] = large;
	}
	int sum = 0;
	for(lli i=0; i<n; i++){
		int m = min(largest_left[i], largest_right[i]);
		if(m>a[i]){
			sum+=m-a[i];
		}
	}
	cout<<sum;
}

int main(){
	lli t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}