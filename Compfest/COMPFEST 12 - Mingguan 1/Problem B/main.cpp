#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	unsigned long long a, b;
	while(n--){
		cin >> a >> b;
		
		if(a > b && a-b > 1){
			cout << "Tere" << endl;
		}
		else if(b > a && b-a > 1){
			cout << "Toni" << endl;
		}
		else{
			cout << "Voting Ulang" << endl;
		}
	}
}
