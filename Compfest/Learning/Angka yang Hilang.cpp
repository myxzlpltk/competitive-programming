#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, x;
	cin >> n >> k;
	
	map<int, int> m;
	
	for(int i=0; i<k; i++){
		cin >> x;
		m.insert({x,1});
	}
	
	int found = 0;
	for(int i=1; i<=n; i++){
		if(!m.count(i)){
			cout << i;
			found++;
			
			if(found < n-k) cout << " ";
		}
	}
	cout << endl;
}
