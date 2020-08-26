#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	cout << "tek kotek kotek kotek, anak ayam turun berkotek" << endl;
	for(int i=n;i>0;i--){
		cout << "anak ayam turunlah " << i << ", mati satu tinggallah ";
		
		if(i==1){
			cout << "induknya";
		}
		else{
			cout << i-1;
		}
		
		cout << endl;
	}
}
