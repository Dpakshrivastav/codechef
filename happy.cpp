#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int num[n],sum[n];
   for(int i=0;i<n;i++)
   {
       cin>>num[i];
   }
   for(int i=0;i<n;i++)
   {
       int prime[100];
       int sums= 0;
       for(int j=3;j<num[i];j+=2)
       {
           int flag=0;
           for(int k=2;k<j;k++)
           {
               if(j%k==0)
               {
                   flag= 1;
                   break;
               }
           }
           if(flag==0)
           {
               int value= j;
               while(value>0)
               {
                   if((value%10)%2==0)
                   {
                       flag=1;
                       break;
                   }
                   else
                   {
                       value= value/10;
                   }
               }
               if(flag==0){
                   prime[i]= j;
                   sums= sums+j;
               }
           }
       }
       sum[i]= sums;
   }
   for(int i=0;i<n;i++){
       cout<<sum[i]<<endl;
   }
}