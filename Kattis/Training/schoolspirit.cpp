#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	double sum = 0, sum2 = 0;
	int data[n];
	for(int i=0; i<n; i++){
		cin >> data[i];
	}

	for(int i=0; i<n; i++){
		int t = 0;
		for(int j=0; j<n; j++){
			if(i!=j){
				sum2 += data[j]*pow(0.8, t++);
			}
		}
		
		sum += data[i]*pow(0.8, i);
	}
	
	printf("%.10f %.10f\n", sum/5.0, sum2/5.0/n);
}
