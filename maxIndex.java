import java.util.*;
class MaxIndex{
	public static Scanner sc = new Scanner(System.in);
	
	public static void merge(long a[], int b[], int l,int m, int r){
		int n1 = m-l+1;
		int n2 = r-m;
		int i, j, k;
		long la[] = new long[n1];
		long ra[] = new long[n2];
		int lb[] = new int[n1], rb[] = new int[n2];
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


	public static void mergeSort(long a[], int b[], int l, int r){
		if(l<r){
			int m = l+(r-l)/2;
			mergeSort(a, b, l, m);
			mergeSort(a, b, m+1, r);
			merge(a, b, l, m, r);
		}
	}


	public static void solve(){
		int n = sc.nextInt();
		long a[] = new long[n];
		int b[] = new int[n];
		for(int i=0; i<n; i++){
			if(sc.hasNext())
				a[i] = sc.nextLong(); 
			b[i] = i;
		}

		mergeSort(a, b,0, n-1);
		int max_i = b[n-1];
		int ans = 0;
		for(int i=n-2; i>=0; i--){
			ans = Math.max(ans , max_i - b[i]);

			max_i = Math.max(max_i, b[i]);
		}
		System.out.println(ans);
	}
	public static void main(String[] args) {

			int t=0;
			if(sc.hasNext())
				t = sc.nextInt();
			while(t-->0){
			solve();
		}
	}
}