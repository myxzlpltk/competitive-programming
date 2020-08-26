#include <iostream>

using namespace std;

int main(){
	int total=0;
	string sq;
	
	cin >> sq;
	
	for(int i=0;i<sq.length();i+=3){
		if(sq[i]!='P'){
			total++;
		}
		if(sq[i+1]!='E'){
			total++;
		}
		if(sq[i+2]!='R'){
			total++;
		}
	}
	
	cout << total;
}