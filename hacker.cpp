
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int hop, a[100], b[100], m[100];
    
    for(int i = 0; i < t; i++){
        cin>>a[i]>>b[i]>>m[i];
    }
    
    for(int i = 0; i < t; i++){
        hop = 0;
        for(int j = a[i]; j <= b[i]; j++){
            if(j%m[i]==0){
                hop++;
            }
        }
        cout<<hop<<" ";
    }
}