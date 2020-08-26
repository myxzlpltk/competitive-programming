#include <iostream>
#include <climits>

using namespace std;

int main(){
	int n;
	cin >> n;
	int temp;
	
	int day=0,min=INT_MAX;
	
	for(int i=0;i<n;i++){
		cin >> temp;
		
		if(temp<min){
			day=i;
			min=temp;
		}
	}
	
	cout << day;
}