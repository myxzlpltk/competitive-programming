#include <iostream>

using namespace std;

int main(){
	string sq;
	cin >> sq;
	
	int a=0,b=0,c=0,d=0;
	
	for(int i=0;i<sq.length();i++){
		if(sq[i]=='_'){
			a++;
		}
		else if(sq[i]>='a'&&sq[i]<='z'){
			b++;
		}
		else if(sq[i]>='A'&&sq[i]<='Z'){
			c++;
		}
		else{
			d++;
		}
	}
	
	float A,B,C,D;
	A=a;B=b;C=c;D=d;
	
	A /= sq.length();
	B /= sq.length();
	C /= sq.length();
	D /= sq.length();
	
	printf("%.16f\n%.16f\n%.16f\n%.16f", A, B, C, D);
}