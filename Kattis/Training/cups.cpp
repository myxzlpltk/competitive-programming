#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n;
	cin >> n;
	string a,b;
	
	string c[n];int r[n];
	for(int i=0;i<n;i++){
		cin >> a >> b;
		
		if(a[0] >= '0' && a[0] <= '9'){
			r[i] = stoi(a);
			c[i] = b;
		}
		else{
			r[i] = stoi(b)*2;
			c[i] = a;
		}
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(r[j] <= r[i]){
				int temp;
				string stemp;
				
				temp = r[i];
				r[i] = r[j];
				r[j] = temp;
				
				stemp = c[i];
				c[i] = c[j];
				c[j] = stemp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout << c[i] << endl;
	}
}