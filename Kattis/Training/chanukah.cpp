#include<bits/stdc++.h>

using namespace std;

int menorah(int n){
	return ((n/2)*((2*1)+(n-1)*1))+n;
}

int main(){
	int p;
	cin >> p;
	
	int k, n;
	while(p--){
		cin >> k >> n;
		cout << k << " " << menorah(n) << endl;
	}
}
