#include<bits/stdc++.h>
#include<cstring>
using namespace std;


void solve(){
	int i=0;
	string s;
	
	getline(cin, s);
	while (s.length()==0 )
	getline(cin, s);


	map<char, string> m;
	m.insert(pair<char, string>('A', "2"));
	m.insert(pair<char, string>('B', "22"));
	m.insert(pair<char, string>('C', "222"));
	m.insert(pair<char, string>('D', "3"));
	m.insert(pair<char, string>('E', "33"));
	m.insert(pair<char, string>('F', "333"));
	m.insert(pair<char, string>('G', "4"));
	m.insert(pair<char, string>('H', "44"));
	m.insert(pair<char, string>('I', "444"));
	m.insert(pair<char, string>('J', "5"));
	m.insert(pair<char, string>('K', "55"));
	m.insert(pair<char, string>('L', "555"));
	m.insert(pair<char, string>('M', "6"));
	m.insert(pair<char, string>('N', "66"));
	m.insert(pair<char, string>('O', "666"));
	m.insert(pair<char, string>('P', "7"));
	m.insert(pair<char, string>('Q', "77"));
	m.insert(pair<char, string>('R', "777"));
	m.insert(pair<char, string>('S', "7777"));
	m.insert(pair<char, string>('T', "8"));
	m.insert(pair<char, string>('U', "88"));
	m.insert(pair<char, string>('V', "888"));
	m.insert(pair<char, string>('W', "9"));
	m.insert(pair<char, string>('X', "99"));
	m.insert(pair<char, string>('Y', "999"));
	m.insert(pair<char, string>('Z', "9999"));
	m.insert(pair<char, string>(' ', "0"));

	for(int i=0; i<s.length(); i++){
		auto itr = m.find(s[i]);
		cout<<itr->second;
	}

}

int main(){
	int t; cin>>t;
	// string s;
	// cout<<endl;	
	while(t--){
		solve();
		cout<<endl;

	}
}