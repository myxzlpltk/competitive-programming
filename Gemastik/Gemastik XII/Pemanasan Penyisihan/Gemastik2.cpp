#include <iostream>

using namespace std;

int main(){
	char alphabet;
	int n;
	
	cin >> n >> alphabet;
//	alphabet = 's';
//	n = 5;
	
	for(int i=0;i<n;i++){
		for(int space=0;space<n-i-1;space++){
			cout << " ";
		}
		
		for(int j=0;j<=i;j++){
			cout << alphabet;
			if(j<i){
				cout << " ";
			}
		}
		cout << endl;
	}
}
