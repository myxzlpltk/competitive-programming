#include <iostream>

using namespace std;

bool isHarshad(int n){
	int sum = 0;
	int temp = n;
	
	while(temp>=1){
		sum += temp%10;
		temp /= 10;
	}
	
	return (n%sum==0);
}

int main(){
	int n;
	cin >> n;
	
	while(true){
		if(isHarshad(n)){
			cout << n;
			break;
		}
		
		n++;
	}
}