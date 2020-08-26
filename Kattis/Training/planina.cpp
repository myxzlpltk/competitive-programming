#include <iostream>

using namespace std;

int main(){
	int n,num=2;
	cin >> n;
	while(n--){
		num*=2;
		num--;
	}
	
	cout << num*num;
}