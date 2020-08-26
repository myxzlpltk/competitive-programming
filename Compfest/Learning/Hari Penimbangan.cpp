#include <bits/stdc++.h>

using namespace std;

int main(){
	int i=6, berat;
	double total = 0;
	while(i--){
		cin >> berat;
		total += berat;
	}
	total = total/6;
	cout << setprecision(10) << total;
}
