#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string str;
	getline(cin, str);
	
	int A=0,B=0;
	
	for(int i=0;i<str.length();i+=2){
		char p = str[i];
		char s = str[i+1];
		
		if(p=='A'){
			if(s=='1') A+=1;
			else if(s=='2') A+=2;
		}
		else if(p=='B'){
			if(s=='1') B+=1;
			else if(s=='2') B+=2;
		}
		
		if(abs(A-B) > 1){
			if(A>=11){
				cout << "A";
				break;
			}
			if(B>=11){
				cout << "B";
				break;
			}
		}
	}
}