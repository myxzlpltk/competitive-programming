#include <iostream>

using namespace std;

int main(){
	int x,y;
	string q;
	
	cin >> x >> y >> q;
	
	for(int i=q.length()-1;i>=0;i--){
		switch(q[i]){
			case 'u':
				y--;
				break;
			case 't':
				x--;
				break;
			case 's':
				y++;
				break;
			case 'b':
				x++;
				break;
		}
	}
	
	cout << x << " " << y;
}
