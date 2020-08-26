#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int sum = a*3+b*2+c*1;
	
	string x,y;
	if(sum>=8) x="Province";
	else if(sum>=5) x="Duchy";
	else if(sum>=2) x="Estate";
	
	if(sum>=6) y="Gold";
	else if(sum>=3) y="Silver";
	else y="Copper";
	
	if(x!=""){
		cout << x << " or " << y;
	}
	else{
		cout << y;
	}
}