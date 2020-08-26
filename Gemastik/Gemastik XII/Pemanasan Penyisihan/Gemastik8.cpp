#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int euclid(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return euclid(b, a%b);
	}
}

int main(){
	string sq;
//	sq = "720 900 1080";
	getline(cin, sq);

	int data[100000], last=0, n=0;
	bool status = true;
	int fpb;
	do{
		int temp = sq.find(' ', last);
		if(temp==-1){
			status=false;
			temp = sq.length();
		}
		
		data[n] = atoi(sq.substr(last, temp-last).c_str());
		last = temp+1;
		
		if(n>1){
			fpb = euclid(fpb, data[n]);
		}
		else{
			fpb = euclid(data[0], data[1]);
		}
		
		n++;
	}while(status);
	
//	int fpb = euclid(a, euclid(b,c));
	cout << fpb << endl;
	
	for(int i=0;i<n;i++){
		cout << data[i]/fpb << " ";
	}
//	cout << a/fpb << " " << b/fpb << " " << c/fpb;
}
