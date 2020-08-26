#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int w,x,y,z;
	w=(b*c);
	x=((a-b)*c);
	y=(b*(a-c));
	z=((a-b)*(a-c));
	
	cout << max(max(w,x),max(y,z))*4;
}