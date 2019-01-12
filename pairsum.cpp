#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long int


// bool binarySearch(int a[], int l, int r, int k){
// 	bool t=true;
// 	if(r-1>l){
// 		int mid = l+(r-1)/2;
// 		//cout<<a[mid-1]<<" "<<a[mid]<<" "<<endl;
// 		if(a[r]+a[r-1]==k) {
// 			cout<<a[r-1]<<" "<<a[r]<<" "<<endl;
// 			t = false;
// 		}
// 		else if(a[r]+a[r-1]<k){
// 			return binarySearch(a, l, mid, k);	
// 		}
// 		else return binarySearch(a, mid+1, r, k);
// 	}
// 	return t;
// }

bool binarySearch(lli a[], lli l, lli r, lli x){
	if(r>=l){
		lli mid = (l + r)/2;
		if(a[mid]==x){
			return true;
		}
		else{
			if (x<a[mid]) return binarySearch(a, l, mid-1, x);
			else return binarySearch(a, mid+1, r, x); 
		
		}	
	}
	return false;
}


void findPair(lli a[], lli n, lli k){
	bool temp = false;
	for(lli i = 0; i<n; i++){
		lli sum = k-a[i];
		if(sum > a[i])
			if(binarySearch(a, i, n-1, sum)){
				cout<<a[i]<<" "<<sum<<" "<<k<<endl;
				temp = true;
			}
	}
	if(!temp)  cout<<(-1)<<endl;
	return;
}


void solve(){
	lli n; cin>>n;
	lli a[n];
	lli k;
	for(lli i=0; i<n; i++) scanf("%lld", &a[i]);
	scanf("%lld", &k);
	// if(a[n-1]+a[n-2]<k){ cout<<(-1)<<endl; return;}
	findPair(a, n, k);


	return;
//	if(temp){ cout<<(-1)<<endl; return;}
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}



