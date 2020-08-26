#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	int data[x][y];
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			cin >> data[i][j];
		}
	}
	
	for(int j=0; j<y; j++){
		for(int i=0; i<x; i++){
			cout << data[i][j];
			if(i<x-1){
				cout << " ";
			}
		}
		cout << endl;
	}
}
