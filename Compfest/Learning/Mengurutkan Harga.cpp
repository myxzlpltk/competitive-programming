#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int data[n];
	for(int i=0; i<n; i++){
		cin >> data[i];
	}
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(data[i] > data[j]){
				swap(data[i], data[j]);
				cout << i+1 << " " << j+1 << endl;
			}
		}
	}
}
