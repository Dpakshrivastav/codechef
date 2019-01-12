#include<bits/stdc++.h>
using namespace std;
#define lli int


int reverse(int arr[], int n, int k)
{
    for (int i=0;i<n; i+=k)
    {
        int left = i;
        int right = min(i+k-1,n-1);
        while (left < right)
            swap(arr[left++], arr[right--]);
    }
}

void solve(){

	lli n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	lli a[n];
	for(lli i=0; i<n; i++){
		scanf("%d", &a[i]);
		// printf("%d", a[i]);
	}

	reverse(a,n,k);
	for (int i = 0; i < n; i++)
    cout << a[i] << " ";

	// // 5-3+1= 3
	// // 2 + 3 - 1 = 4
	// lli j, i;
	// for(i=0; i<=n-k+1; i++){
	// 	for(j=i+k-1; j>=i; j--){
	// 	 	if(j>=n) continue;
	// 	 	cout<<a[j]<<" ";
	// 	 	cout<<j<<endl;
	// 	 }
	// i+=k;
	// cout<<i;
	// }
}

int main(){
	lli t; cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
