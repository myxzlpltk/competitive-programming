#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int data[n][4];
	
	for(int i=0;i<n;i++){
		cin >> data[i][0] >> data[i][1] >> data[i][2] >> data[i][3];
	}
	
	int total = 0;
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int w1 = data[i][2]-data[i][0];
			int w2 = data[j][2]-data[j][0];
			int h1 = data[i][3]-data[i][1];
			int h2 = data[j][3]-data[j][1];
			
			if((w1<=w2&&h1<=h2)||(w1>=w2&&h1>=h2)||(w1<=h2&&h1<=w2)||(w1>=h2&&h1>=w2)){
				
			}
			else{
				total++;
			}
		}
	}
	
	cout << total;
}
