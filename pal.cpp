#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back


lli genMirror(string sn){
    int i = 0, j = sn.length()-1;
    while(i<j){
        sn[j--] = sn[i++];
    }
    return stoll(sn);
}

void solve(){
    lli num;
    cin>>num;
    string sn = to_string(num);
    lli n = sn.length();
    if(n==1){
        cout<<num<<endl;
        return;
    }
    if(genMirror(sn) == num){
        cout<<genMirror(sn)<<endl;
        return;
    }

    lli p0 = genMirror(sn);
    lli p1 = genMirror(to_string(stoll(sn.substr(0, n/2))+1) + sn.substr(n/2));
    // cout<<p1<<endl;
    lli p2 = genMirror(to_string(stoll(sn.substr(0, n/2+1))+1) + sn.substr(n/2+1));
    // cout<<p2<<endl;
    lli p3 = genMirror(to_string(stoll(sn.substr(0, n/2))-1) + sn.substr(n/2));
    // cout<<p3<<endl;
    lli p4 = genMirror(to_string(stoll(sn.substr(0, n/2+1))-1) + sn.substr(n/2+1));
    // cout<<p4<<endl;

    vector<lli> stringPatterns;
    stringPatterns.pb(p0);
    stringPatterns.pb(p1);  
    stringPatterns.pb(p2);  
    stringPatterns.pb(p3);  
    stringPatterns.pb(p4);
    
    lli diff = LLONG_MAX;
    lli pal = LLONG_MAX;

    for (auto i:stringPatterns){
        if(abs(i - num) < diff){
            diff = abs(i-num);
            pal = i;
        } 
        else if(abs(i-num)==diff){
            pal = min(pal, i);
        } 
    }
    cout<<pal<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}