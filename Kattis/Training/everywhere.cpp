#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,total=0,z=0;
		
		cin >> n;
		
		string city[n], tempcity;
		
		for(int i=0;i<n;i++){
			cin >> tempcity;
			
			bool isFound = false;
			for(int j=0;j<z;j++){
				if(city[j] ==  tempcity){
					isFound = true;
					break;
				}
			}
			
			if(!isFound){
				city[z] = tempcity;
				total++;
				z++;
			}
		}
		
		cout << total << endl;
	}
}