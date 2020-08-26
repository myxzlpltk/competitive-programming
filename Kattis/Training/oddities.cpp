#include <iostream>

using namespace std;

int main(){
	int n,num;
	cin >> n;
	while(n--){
		cin >> num;
		if(num%2==0){
			cout << num << " is even" << endl;
		}
		else{
			cout << num << " is odd" << endl;
		}
	}
}