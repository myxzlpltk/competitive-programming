#include <iostream>

using namespace std;

int main() {
	bool cup[3] = {true, false, false};
	
	string sq;
	cin >> sq;
	
	for(int i=0;i<sq.length();i++){
		switch(sq[i]){
			case 'A':
				swap(cup[0], cup[1]);
				break;
			case 'B':
				swap(cup[1], cup[2]);
				break;
			case 'C':
				swap(cup[0], cup[2]);
				break;
		}
	}
	
	for(int i=0;i<3;i++){
		if(cup[i]){
			cout << i+1;
			break;
		}
	}
}