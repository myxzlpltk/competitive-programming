#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	string str[n];
	
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin, str[i]);
		
		if(str[i].substr(0, 11) == "Simon says "){
			cout << str[i].substr(11) << endl;
		}
	}
}