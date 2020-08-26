#include <iostream>

using namespace std;

int main(){
	int n,total=0;
	do{
		cin >> n;
		if(n!=0){
			string name[n];
			for(int i=0;i<n;i++){
				cin >> name[i];
			}
			cout << "SET " << ++total << endl;
			
			for(int i=0;i<n;i+=2){
				cout << name[i] << endl;
			}
			for(int i=(n%2==0?n-1:n-2);i>0;i-=2){
				cout << name[i] << endl;
			}
		}
	}while(n!=0);
}