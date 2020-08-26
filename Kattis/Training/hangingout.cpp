#include <iostream>

using namespace std;

int main(){
	int a,b,n=0,r=0,t;
	string c;
	
	cin >> a >> b;
	
	for(int i=0;i<b;i++){
		cin >> c >> t;
		
		if(c=="enter"){
			if(n+t>a){
				r++;
			}
			else{
				n+=t;
			}
		}
		else if(c=="leave"){
			n-=t;
		}
	}
	
	cout << r;
}