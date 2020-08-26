#include <iostream>

using namespace std;

int main(){
	int n;
	float q,y,s=0;
	
	cin >> n;
	while(n--){
		cin >> q >> y;
		s+=(q*y);
	}
	
	printf("%.3f", s);
}