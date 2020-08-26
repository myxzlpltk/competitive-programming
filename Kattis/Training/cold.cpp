#include <iostream>

using namespace std;

int main(){
	int n,total=0,temp;
	cin >> n;
	while(n--){
		cin >> temp;
		if(temp<0){
			total++;
		}
	}
	
	cout << total;
}