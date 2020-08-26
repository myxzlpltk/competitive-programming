#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	map<string, int> mp;
	
	string s;
	for(int i=1; i<=n; i++){
		cin >> s;
		mp.insert(pair<string, int>(s, i));
	}
	
	while(q--){
		cin >> s;
		if(mp[s] > 0){
			cout << mp[s] << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
}
