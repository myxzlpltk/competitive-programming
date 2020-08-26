#include <iostream>

using namespace std;

int main(){
	int a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	
	for(int i=0;i<3;i++){
		for(int j=i+1;j<4;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout << a[0]*a[2];
}