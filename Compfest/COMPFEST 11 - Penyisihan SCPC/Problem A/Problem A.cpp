#include <iostream>

using namespace std;

int main(){
	int n;
	unsigned long long int count = 0, x;
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		count += x;
		cin >> x;
		count += x;
	}
	
	cout << count << endl;
}
