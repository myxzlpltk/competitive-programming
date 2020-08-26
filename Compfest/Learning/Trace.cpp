#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, total;
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> x;
			if(i == j){
				total += x;
			}
		}
	}
	
	cout << total << endl;
}
