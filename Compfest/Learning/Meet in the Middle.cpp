#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, i;
	cin >> n;
	int data[n];
	for(i=0; i<n; i++){
		cin >> data[i];
	}
	
	for(i=0; i<n/2; i++){
		cout << data[i] << " " << data[n-i-1];
		if(i<n/2-1) cout << " ";
	}
	if(n%2 == 1){
		if(i!=0) cout << " ";
		cout << data[i];
	}
	cout << endl;
}
