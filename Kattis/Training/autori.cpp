#include <iostream>

using namespace std;

int main(){
	string sq;
	cin >> sq;
	
	for(int i=0;i<sq.length();i++){
		if(sq[i]>=65&&sq[i]<=90){
			cout << sq[i];
		}
	}
}