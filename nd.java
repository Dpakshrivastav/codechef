import java.util.*;
import java.io.*;
class Geek{
	public static Scanner sc = new Scanner(System.in);
	public static void main(String[] args)  {

		int t = sc.nextInt();
		while(t!=0){
			solve();
			t--;
		}
	}
	public static void solve(){
		int n = sc.nextInt();
		int a[][] = new int[n][n]; int b[] = new int[n];
		for(int i=0; i<n; i++){ 
			for(int j=0; j<n; j++){
					a[i][j]=sc.nextInt();
				
			}
		}

		for(int i=0; i<n; i++){
				b[i] = sc.nextInt();
			}
		
		int max=b[0], j=0, sum=0;
		for(int i=0; i<n; i++){
			sum+=a[i][i];
			if(b[i]>max) max=b[i];
		}
		System.out.println(sum+" "+max);
	}
}