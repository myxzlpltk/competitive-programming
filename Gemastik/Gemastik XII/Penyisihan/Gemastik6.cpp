#include <iostream>

using namespace std;

int main(){
	string sq;
	int key;
	
	getline(cin, sq);
	cin >> key;
	
	if(key<0){
		key = key*-1;
		key = 26-(key%26);
	}
	
	char a;
	for(int i=0;i<sq.length();i++){
		a = sq[i];
		if(a>=65&&a<=90){
			a = ((a-65)+key)%26+65;
			cout << a;
		}
		else if(a>=97&&a<=122){
			a = ((a-97)+key)%26+97;
			cout << a;
		}
		else{
			cout << a;
		}
	}
	
}
