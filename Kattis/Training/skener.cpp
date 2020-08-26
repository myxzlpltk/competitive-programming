#include <iostream>

using namespace std;

int main(){
	int r,c,zr,zc;
	cin >> r >> c >> zr >> zc;
	string sq[r];
	
	for(int i=0;i<r;i++){
		cin >> sq[i];
	}
	
	for(int i=0;i<r;i++){
		for(int a=0;a<zr;a++){
			for(int j=0;j<c;j++){
				for(int b=0;b<zc;b++){
					cout << sq[i][j];
				}
			}
			cout << endl;
		}
	}
}