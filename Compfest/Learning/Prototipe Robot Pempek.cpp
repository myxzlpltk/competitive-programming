#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,k,q;
	cin >> n >> m >> k >> q;
	
	vector<pair<int, int> > fishes;
	char c;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> c;
			
			if(c == 'X'){
				fishes.push_back(pair<int, int>(i, j));
			}
		}
	}
	
	while(q--){
		int result = INT_MAX;
		int x, y;
		
		cin >> x >> y;
		
		for(int i=0; i<k; i++){
			int distance = abs(x-fishes[i].first)+abs(y-fishes[i].second);
			result = min(distance, result);
		}
		
		cout << result << endl;
	}
}
