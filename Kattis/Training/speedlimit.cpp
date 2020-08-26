#include <iostream>

using namespace std;

int main(){
	int distance[10], speed, time, temp, dist;
	int n, i=0;
	while(true){
		cin >> n;
		if(n==-1) break;
		
		time=0;
		dist=0;
		for(int j=0;j<n;j++){
			cin >> speed >> temp;
			dist += (speed*(temp-time));
			time = temp;
		}
		
		distance[i] = dist;
		
		i++;
	}
	
	for(int j=0;j<i;j++){
		cout << distance[j] << " miles\n";
	}
}