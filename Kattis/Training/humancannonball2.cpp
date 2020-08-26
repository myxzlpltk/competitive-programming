#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--){
		double v,a,x,h1,h2;
		
		cin >> v >> a >> x >> h1 >> h2;
		
		double t,y;
		
		t=x/v/cos(a*M_PI/180);
		y=v*t*sin(a*M_PI/180)-4.905*pow(t,2);
		
		if(y>=h1+1 && y<=h2-1){
			cout << "Safe" << endl;
		}
		else{
			cout << "Not Safe" << endl;
		}
	}
}