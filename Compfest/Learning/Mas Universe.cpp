#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, x;
	cin >> n;
	while(n--){
		cin >> x;
		m = max(m, x);
	}
	
	cout << m << endl;
}
