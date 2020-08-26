#include <iostream>

using namespace std;

int main(){
	float total=0,c,l,w,h;
	cin >> c >> l;
	while(l--){
		cin >> w >> h;
		total += (w*h);
	}
	
	total *= c;
	
	printf("%.7f", total);
}