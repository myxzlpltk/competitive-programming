#include <iostream>

using namespace std;

int main(){
	int n;
	float b,p;
	
	cin >> n;
	
	while(n--){
		cin >> b >> p;
		
		float x,y,z;
		y = 60*b/p;
		x = y-(60/p);
		z = y+(60/p);
		
		printf("%.4f %.4f %.4f\n", x, y, z);
	}
}