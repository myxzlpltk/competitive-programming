#include <bits/stdc++.h>

using namespace std;

int main(){
	long double p;
	cin >> p;
	
	if(p == 0){
		cout << 0 << endl;
	}
	else{
		p = p/100;
		cout << setprecision(20) << p / (1 - ((1-p) * (1-p)));
	}
}
