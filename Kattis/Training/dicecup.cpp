#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	
	for(int i=min(a,b)+1;i<=max(a,b)+1;i++){
		cout << i << endl;
	}
}