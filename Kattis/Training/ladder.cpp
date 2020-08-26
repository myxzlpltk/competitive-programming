#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float h,v;
	cin >> h >> v;
	
	cout << ceil(h/sin(v*M_PI/180));
}