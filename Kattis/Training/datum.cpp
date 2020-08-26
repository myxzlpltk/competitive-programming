#include <iostream>

using namespace std;

int main(){
	int d,m;
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int total=0;
	string day[7] = {
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};
	
	cin >> d >> m;
	
	for(int i=0;i<m-1;i++){
		total+=month[i];
	}
	
	total += d;
	total += 2;
	
	total = total%7;
	
	cout << day[total];
}