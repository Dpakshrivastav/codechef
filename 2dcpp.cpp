// #include<bits/stdc++.h>
// using namespace std;

// int find(int arr[], int len, int seek)
// {
//     for (int i = 0; i < len; ++i)
//     {
//         if (arr[i] == seek) return i;
//     }
//     return -1;
// }

// void solve(){
// 	int n; cin>>n;
// 	int a[n][n];
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<n; j++){
// 			cin>>a[i][j];
// 		}
// 	}
// 	bool temp = false;
// 	int m[n];
// 	int count=0;
// 	for(int i = 0; i<n; i++) m[i]=-1;
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<n; j++){
// 			if(find(m, n, j)>=0) continue;
// 			if(a[i][j]==0){
// 				for(int k = 0; k<n; k++){
// 					a[i][k]=0;
// 					a[k][j]=0;
					
// 				}
// 				m[count++] = j;
// 				break;
// 			}
// 	//		cout<<a[i][j]<<" ";
// 		}
// 	}
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<n; j++){
// 			cout<<a[i][j]<<" ";
	
// 		}
// 	}

// }


// int main(){
// 	int t; cin>>t;
// 	while(t--){
// 		solve();
// 		cout<<"\n";
// 	}
// }


#include<iostream>
#include<bits/stdc++.h>
#include<string>

typedef long long int ll;

using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int arr[n][n],i,j;
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>arr[i][j];
           }
       }
   bool row[n],col[n];

   for(i=0;i<n;i++)
   {
       row[i]=-1;
       col[i]=-1;
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(arr[i][j]==0)
           {
               row[i]=0;
               col[j]=0;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(row[i]==0||col[j]==0)
           {
               arr[i][j]=0;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           cout<<arr[i][j]<<" ";
       }
   }
   cout<<"\n";
   }
}
