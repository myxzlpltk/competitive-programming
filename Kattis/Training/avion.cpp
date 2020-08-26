#include <iostream>

using namespace std;

int main(){
	string sq;
	int total=1, data[1000], i=0;
	
	while(cin >> sq){
		if(sq.find("FBI")!=string::npos){
			data[i]=total;
			i++;
		}
		
		total++;
	}
	
	if(i>0){
		for(int a=0;a<i;a++){
			cout << data[a] << " ";
		}
	}
	else{
		cout << "HE GOT AWAY!";
	}
}