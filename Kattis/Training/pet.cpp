#include <iostream>

using namespace std;

int main(){
	int win=0,total=0,temp;
	int a,b,c,d;
	
	for(int i=1;i<=5;i++){
		cin >> a >> b >> c >> d;
		temp = a+b+c+d;
		if(temp>total){
			total=temp;
			win=i;
		}
	}
	
	cout << win << " " << total;
}