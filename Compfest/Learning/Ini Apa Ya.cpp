#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	cin >> c;
	
	if(c == '-'){
		cout << "bilangan bulat negatif" << endl;
	}
	else if(c == '0'){
		cout << "nol" << endl;
	}
	else if(c >= '1' && c <= '9'){
		cout << "bilangan bulat positif" << endl;
	}
	else{
		cout << "kata" << endl;
	}
}
