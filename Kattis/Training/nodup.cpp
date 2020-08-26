#include <iostream>
#include <vector>

using namespace std;

int main() {
	string sq;
	getline(cin, sq);
	vector<string> data;
	
	string temp="";
	int len = sq.length();
	for(int i=0;i<len;i++){
		if(i==len-1 || sq[i+1]==' '){
			temp.push_back(sq[i]);
			data.push_back(temp);
			
			temp="";
			
			i++;
		}
		else{
			temp.push_back(sq[i]);
		}
	}
	
	bool isRepeat = false;
	int n=data.size();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j && data[i]==data[j]){
				isRepeat = true;
				break;
			}
		}
		
		if(isRepeat) break;
	}
	
	if(isRepeat) cout << "no";
	else cout << "yes";
	
}