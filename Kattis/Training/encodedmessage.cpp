#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	string str;
	
	cin >> n;

	while(n--){
		cin >> str;
		
		int size = sqrt(str.length());
		
		for(int i=size-1;i>=0;i--){
			for(int j=0;j<size;j++){
				int index = i+(j*size);
				
				cout << str[index];
			}
		}
		
		cout << endl;
	}
}