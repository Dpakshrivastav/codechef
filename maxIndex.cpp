#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define lld int
#define pb push_back
#define mk make_pair



void merge(lli a[], lld b[], lld l,lld m, lld r){
	lld n1 = m-l+1;
	lld n2 = r-m;
	lld i, j, k;
	lli la[n1], ra[n2];
	lld lb[n1], rb[n2];
	for(i=0; i<n1; i++){
		la[i]=a[l+i];
		lb[i]=b[l+i];
	}
	for(j=0; j<n2; j++){
		ra[j]=a[m+1+j];
		rb[j]=b[m+1+j];
	}
	i=0;
	j=0;
	k=l;
	while(i < n1 && j < n2){
		if(la[i]<=ra[j]){
			a[k]=la[i];
			b[k]=lb[i];
			i++;
		}
		else{
			a[k]=ra[j];
			b[k]=rb[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		a[k]=la[i];
		b[k]=lb[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=ra[j];
		b[k]=rb[j];
		j++;
		k++;
	}
}

void mergeSort(lli a[], lld b[], lld l, lld r){
	if(l<r){
		lld m = l+(r-l)/2;
		mergeSort(a, b, l, m);
		mergeSort(a, b, m+1, r);
		merge(a, b, l, m, r);
	}
}

void solve(){
	lld n=1; cin>>n;
	lli a[n];
	lld b[n];
	b[0]=0;
	a[0]=0;
	for(int i=0; i<n; i++){
		cin>>a[i]; 
		b[i]=i;
	}

	mergeSort(a, b,0, n-1);
	lld max_i = b[n-1];
	lld ans = 0;
	for(lli i=n-2; i>=0; i--){
		ans = max(ans , max_i - b[i]);

		max_i = max(max_i, b[i]);
	}
	
	cout<<ans<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}	



