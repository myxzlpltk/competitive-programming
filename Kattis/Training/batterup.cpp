#include <iostream>

using namespace std;

int main(){
	int n,a;
	double sum=0,total=0;
	cin >> n;
	while(n--){
		cin >> a;
		
		if(a>=0){
			total++;
			sum+=a;
		}
	}
	double result = sum/total;
	printf("%.9f", result);
}