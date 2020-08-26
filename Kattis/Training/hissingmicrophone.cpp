#include <iostream>

using namespace std;

int main(){
	string sq;
	cin >> sq;
	if(sq.find("ss", 0)!=string::npos){
		cout << "hiss";
	}
	else{
		cout << "no hiss";
	}
}