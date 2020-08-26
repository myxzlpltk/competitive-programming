#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	bool data[n];
	
	string status;
	for(int i=0;i<n;i++){
		cin >> status;
		
		if(status == "JUJUR"){
			data[i] = true;
		}
		else{
			data[i] = false;
		}
	}
	
	bool now = data[0];
	for(int i=1;i<n;i++){
		cout << i << "-"<< now << endl;
		if(now==data[i]){
			now=false;
		}
		else{
			now=true;
		}
	}
	
	if(now){
		cout << "JUJUR" << endl;
	}
	else{
		cout << "BOHONG" << endl;
	}
}
