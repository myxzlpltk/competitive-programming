#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	string sq;
	getline(cin, sq);
	
	int data[1000], last=0, n=0;
	bool status = true, isFibonacci=true;
	do{
		int temp = sq.find(' ', last);
		if(temp==-1){
			status=false;
			temp = sq.length();
		}
		
		data[n] = atoi(sq.substr(last, temp-last).c_str());
		last = temp+1;
		
		if(isFibonacci && n>1 && (data[n-2]+data[n-1]!=data[n])){
			isFibonacci = false;
		}
		
		n++;
	}while(status);
	
	if(isFibonacci){
		cout << "BENAR";
	}
	else{
		cout << "SALAH";
	}
}
