#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int time[n];
	double mol[n];
	
	for(int i=0;i<n;i++){
		cin >> time[i] >> mol[i];
	}
	
	double total=0,temp=0;
	
	for(int i=0;i<n-1;i++){
		temp = ((mol[i]+mol[i+1])/2)*(time[i+1]-time[i])/1000;
		total += temp;
	}
	
	printf("%.9f", total);
}