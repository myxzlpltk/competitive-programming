#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	string sq[n];
	
	bool isCorrect = true;
	
	for(int i=0;i<n;i++){
		cin >> sq[i];
		
		int b=0,w=0,total=0;
		char last = ' ';
		for(int j=0;j<n;j++){
			if(sq[i][j]=='B'){
				b++;
			}
			else if(sq[i][j]=='W'){
				w++;
			}
			
			if(last==sq[i][j]){
				if(total<2){
					total++;
				}
				else{
					isCorrect=false;
					break;
				}
			}
			else{
				last=sq[i][j];
				total=1;
			}
		}
		
		if(w!=b){
			isCorrect=false;
			break;
		}
	}
	
	for(int i=0;i<n;i++){
		int b=0,w=0,total=0;
		char last=' ';
		for(int j=0;j<n;j++){
			if(sq[j][i]=='B'){
				b++;
			}
			else if(sq[j][i]=='W'){
				w++;
			}
			
			if(last==sq[j][i]){
				if(total<2){
					total++;
				}
				else{
					isCorrect=false;
					break;
				}
			}
			else{
				last=sq[j][i];
				total=1;
			}
		}
		
		if(w!=b){
			isCorrect=false;
			break;
		}
	}
	
	cout << (int)isCorrect;
}