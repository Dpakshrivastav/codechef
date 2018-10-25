#include <bits/stdc++.h>

#define LL long long
const int rem = 1000000007;
using namespace std;

void show(LL a[], LL sz) {
    for (LL l32 = 0; l32 < sz; l32 += 1)
        cout << a[l32] << " ";
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while (t>0)
{
    t-=1;
    string s;
    string r="";
    cin>>s;
    int po,p,rem;
    for(int i=0;i<s.length();i+=1)
    {
        p=int(s[i]);
        rem=p%26;
        p-=96;
        if(p+rem==26)
            r+='z';
        else
        r+=char(((p+rem)%26)+96);
    }
    cout<<r<<endl;

}
}