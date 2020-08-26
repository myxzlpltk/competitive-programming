#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	string t[n],u[n],b[n];
	int w=0;
	
	for(int i=0;i<n;i++){
		cin >> u[i] >> t[i];
	}
	
	for(int i=0;i<n;i++){
		bool v = true;
		for(int j=0;j<w;j++){
			if(u[i] == b[j]){
				v = false;
				break;
			}
		}
		
		if(v){
			cout << u[i] << " " << t[i] << endl;
			
			b[w] = u[i];
			w++;
		}
		
		if(w>=12){
			break;
		}
	}
}