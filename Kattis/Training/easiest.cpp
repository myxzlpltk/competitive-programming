#include <iostream>

using namespace std;

int sum(int n){
	int sum = 0;
	while(n>=1){
		sum += n%10;
		n /= 10;
	}
	
	return sum;
}

int main(){
	int n;
	
	while(true){
		cin >> n;
		if(n==0) break;
		
		bool isFound = false;
		int i=11;
		do{
			if(sum(n) == sum(n*i)){
				cout << i << endl;
				isFound = true;
			}
			
			i++;
		}while(!isFound);
	}
}