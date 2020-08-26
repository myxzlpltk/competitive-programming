#include <iostream>
#include <math.h>

#define PI 3.14159265

using namespace std;

int main(){
	int N;
	char x;
	int i=0, data[101];
	
	do{
		scanf("%d%c", &N, &x);
		data[i]=N;
		
		i++;
	}while(i<100 && x!='\n');
	
	int left=0, right=0, upward=0;
	if(i%2==1) upward=1;
	
	int tleft=0, tright=0;
	for(int a=0;a<i/2+upward;a++){
		left+=sin((180-(360/i))*PI/180);
		tleft++;
	}
	for(int a=i/2+upward;a<i;a++){
		left+=sin((180-(360/i))*PI/180)*;
		tright++;
	}
}
