#include <iostream>

using namespace std;

int main(){
	string sq;
	cin >> sq;
	for(int i=0;i<sq.length();i++){
		cout << sq[i];
		while(sq[i]==sq[i+1]){
			i++;
		}
	}
}