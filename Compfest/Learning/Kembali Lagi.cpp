#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, x;
	cin >> a >> b >> c >> x;
	
	int counter = 0;
	int newx = x;
	do{
		newx = (a*newx+b)%c;
		counter++;
	}while(newx != x);
	
	cout << counter << endl;
}
