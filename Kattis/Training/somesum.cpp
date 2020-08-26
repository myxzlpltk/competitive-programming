#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	string a="Odd",b="Even",c="Either";
	
	if(n==2){
		cout << a;
	}
	else if(n%4==0){
		cout << b;
	}
	else if(n%2==1){
		cout << c;
	}
	else if(n%2==0){
		if((n/2)%2==1){
			cout << a;
		}
		else{
			cout << b;
		}
	}
}