#include <iostream>

using namespace std;

int main(){
	long poin;
	cin >> poin;
	
	if(poin<2){
		cout << "MUSTAHIL";
		return 0;
	}
	if(poin==3){
		cout << "MUSTAHIL";
		return 0;
	}
	
	long sisa = poin%5;
	
	if(sisa%2==0){
		cout << sisa/2 << " " << poin/5;
	}
	else{
		cout << (sisa+5)/2 << " " << poin/5-1;
	}
}
