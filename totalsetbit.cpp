#include<bits/stdc++.h>
using namespace std;
#define pb push

void solve(){
	unsigned int n; cin>>n;
	int sum=0;
    
    for(int i=0;i<32;i++){
        
        int blockSize=pow(2,i+1);
    
        int completeBlocks=(n+1)/(blockSize);
        
        int number_of_ones=pow(2,i)*(completeBlocks);
        
        int incompleteBlock=(n+1)%(blockSize);
        
        int remainder_ones=incompleteBlock-(pow(2,i));
        
        if(remainder_ones>0){
            number_of_ones+=remainder_ones;
        }
        
        sum=sum+number_of_ones;
        
    }
    cout<<sum;	
}


int main(){
	int t; cin>>t;
	while(t--){
	solve();
		cout<<endl;
	}
}
