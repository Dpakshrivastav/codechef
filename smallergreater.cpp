#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair

bool checkleft(int a[], int i){
	for(int j=0; j<i; j++){
		if(a[j]>a[i]) return false;
	}
	return true;
}
bool checkright(int a[], int i, int n){
	for(int j=i+1; j<n; j++){
		if(a[j]<a[i]) return false;
	}
	return true;
}

void print(int ans){
	cout<<ans<<endl;
}

void solve(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int ans = -1;
	if(n<3) print(ans);
	for(int i=1; i<n-1; i++){
		if(checkleft(a, i) && checkright(a, i, n)){
			ans = a[i];
			print(ans);
			return;
		}
	}
	print(ans);	
}






// 	int i = 1, j, k;
// 	while(i<n){
// 		j=i;
// 		k=0;
// 		while(j < n-1 && a[j+1]>=a[i]){
// 			j++;
// 		}		
// 		while(k < i && a[k]<=a[i]){
// 			k++;
// 		}
// 		if(k == i && j == n-1) {
// 				cout<<a[i]<<endl;
// 				return;
// 			}
// 		i++;
// 	}

// 	cout<<(-1)<<endl;


// }

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}