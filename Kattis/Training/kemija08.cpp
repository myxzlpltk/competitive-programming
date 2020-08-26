#include <iostream>
#include <string.h>

using namespace std;

bool isVokal(char a){
	if(a=='a'||a=='i'||a=='u'||a=='e'||a=='o'){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	string str;
	getline(cin, str);
	
	for(int i=0;i<str.length();i++){
		cout << str[i];
		if(isVokal(str[i])){
			i+=2;
		}
	}
}