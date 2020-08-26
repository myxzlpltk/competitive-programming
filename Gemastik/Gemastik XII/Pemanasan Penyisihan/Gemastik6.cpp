#include <iostream>

using namespace std;

int main(){
	string rule;
	int n;
	cin >> rule >> n;
	
	while(n--){
		string sq;
		cin >> sq;
		
		int pos = 0;
		for(int i=0;i<rule.length();i++){
			if(rule[i]!='*'){
				if(rule[i+1]=='*'){
					while(true){
						if(rule[i]==sq[pos]){
							pos++;
						}
						else{
							break;
						}
					}
					
					i++;
				}
				else{
					if(rule[i]!=sq[pos]){
						break;
					}
					
					pos++;
				}
			}
		}
		
		if(pos==sq.length()){
			cout << "BENAR\n";
		}
		else{
			cout << "SALAH\n";
		}
	}
}
