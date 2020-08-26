#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n,w,h,d,m;
	cin >> n >> w >> h;
	d = sqrt(w*w+h*h);
	for(int i=0;i<n;i++){
		cin >> m;
		
		if(m<=w||m<=h||m<=d){
			cout << "DA";
		}
		else{
			cout << "NE";
		}
		
		cout << endl;
	}
}