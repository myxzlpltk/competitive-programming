#include <iostream>

using namespace std;

int main(){
	int x,n,p,sum;
	cin >> x >> n;
	sum = x*(n+1);
	for(int i=0;i<n;i++){
	    cin >> p;
	    sum -= p;
	}
	cout << sum;
}