#include <iostream>

using namespace std;

int main(){
	int n,num,result;
	
	cin >> n;
	
	while(n--){
		cin >> num;
		result=1;
		for(int i=2;i<=num;i++){
			result = (result*i)%10;
		}
		
		cout << result << endl;
	}
}