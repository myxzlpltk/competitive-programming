#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string sq;
	cin >> sq;
	
	int t=0,c=0,g=0,i=0;
	while(sq[i]){
		if(sq[i]=='T'){
			t++;
		}
		else if(sq[i]=='C'){
			c++;
		}
		else if(sq[i]=='G'){
			g++;
		}
		
		i++;
	}
	
	
	int sum = min(min(t,c),g)*7;
	sum += pow(t,2)+pow(c,2)+pow(g,2);
	
	cout << sum;
}