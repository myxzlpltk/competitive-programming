#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n,a,sum=0;
	cin >> n;
	while(n--){
		cin >> a;
		sum+=pow((a/10), (a%10));
	}
	
	cout << sum;
}