#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	for(int a=1;a<=n;a++){
		int g;
		cin >> g;
		int k[g];
		bool s[g];
		for(int i=0;i<g;i++){
			cin >> k[i];
			s[i]=false;
		}
		
		for(int i=0;i<g;i++){
			if(s[i]==false){
				bool isFound=false;
				for(int j=0;j<g;j++){
					if(s[j]==false && k[j]==k[i] && i!=j){
						s[i]=true;
						s[j]=true;
						isFound=true;
						break;
					}
				}
				
				if(!isFound){
					cout << "Case #"<< a << ": " << k[i] << endl;
					break;
				}
			}
		}
	}
}