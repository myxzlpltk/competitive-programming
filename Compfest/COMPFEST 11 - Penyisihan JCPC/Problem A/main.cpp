#include <iostream>

using namespace std;

int main(){
	unsigned long long a,b;
	cin >> a >> b;
	
	long double total = a*b;
	total = total/11;
	
	printf("%.0Lf\n", total);
}
