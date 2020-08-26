#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int total = max(a,b)*2;
	
	if(total>0){
		if(a==b){
			cout << "Even ";
		}
		else{
			cout << "Odd ";
		}
		
		cout << total;
	}
	else{
		cout << "Not a moose";
	}
}