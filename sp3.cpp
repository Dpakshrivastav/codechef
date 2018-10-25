#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t; 
    for(int i = 0; i<t;i++)
        {
        int c = 0,f=0,p=1;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++) cin>>a[i];
        f = a[0];
        while(p<n)
        {

            for(int i = 0; i<f; i++)
            {
                p += a[i];
            }
            c++;
            f = p;
        }
    cout<<c<<endl;    
    }
}