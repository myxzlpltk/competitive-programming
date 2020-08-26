#include <iostream>

using namespace std;

int __(int a, int b, int c){
	if(a==b){
		return c;
	}
	else if(b==c){
		return a;
	}
	else if(a==c){
		return b;
	}
	
	return 0;
}

int main(){
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >> f;
	cout << __(a,c,e) << " " << __(b,d,f);
}