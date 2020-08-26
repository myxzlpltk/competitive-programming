#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int data[n];
	for(int i=0; i<n; i++){
		cin >> data[i];
	}
	
	int total = 0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(data[i] > data[j]){
				total++;
			}
		}
	}
	
	cout << total << endl;
}
