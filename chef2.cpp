#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, i=0;
	cin>>n;
	char u[n][20];
	while(i<n){
		cin>>u[i];
		i++;
	}
	int count=0;
	for(int j=0; j<n; j++)
		for(int i=0; i<sizeof(u[j]); i++){
			if(u[j][i]=='c'&&u[j][i+1]=='h'||u[j][i]=='h'&&u[j][i+1]=='e'||u[j][i]=='e'&&u[j][i+1]=='f'){// ||u[j][i].find("ef")||u[i].find("che")||u[i].find("hef")||u[i].find("chef"))!=string::npos){
				count++;
				break;
			}
		}
	cout<<count<<endl;
}