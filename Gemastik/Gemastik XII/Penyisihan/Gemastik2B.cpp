#include <iostream>

using namespace std;

int main(){
	int N;
	char x;
	int i=0, res;
	bool status = true;
	
	do{
		scanf("%d%c", &N, &x);
		
		if(i==0){
			res = N;
		}
		else{
			if(status && N!=res){
				status = false;
			}
		}
		
		i++;
	}while(i<100 && x!='\n');
	
	if(status){
		cout << "MUNGKIN";
	}
	else{
		cout << "MUSTAHIL";
	}
}
