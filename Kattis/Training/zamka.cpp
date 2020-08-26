#include <iostream>

using namespace std;

int dig(int num){
	int sum=0;
	
	while(num>0){
		sum += (num%10);
		num /= 10;
	}
	
	return sum;
}

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	for(int i=a;i<=b;i++){
		if(dig(i)==c){
			cout << i << endl;
			break;
		}
	}
	
	for(int i=b;i>=a;i--){
		if(dig(i)==c){
			cout << i << endl;
			break;
		}
	}
}