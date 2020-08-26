#include <iostream>
#include <math.h>

using namespace std;

int findmax(int arr[], int left, int right){
	if(left==right){
		return arr[left];
	}
	else{
		int mid = (left+right)/2;
		return max( findmax(arr, left, mid), findmax(arr, mid+1, right) );
	}
}

int main(){
	int total[13];
	for(int i=0;i<13;i++) total[i]=0;
	
	string sq;
	for(int i=0;i<5;i++){
		cin >> sq;
		
		if(sq[0]=='A') total[0]++;
		else if(sq[0]=='2') total[1]++;
		else if(sq[0]=='3') total[2]++;
		else if(sq[0]=='4') total[3]++;
		else if(sq[0]=='5') total[4]++;
		else if(sq[0]=='6') total[5]++;
		else if(sq[0]=='7') total[6]++;
		else if(sq[0]=='8') total[7]++;
		else if(sq[0]=='9') total[8]++;
		else if(sq[0]=='T') total[9]++;
		else if(sq[0]=='J') total[10]++;
		else if(sq[0]=='Q') total[11]++;
		else if(sq[0]=='K') total[12]++;
	}
	
	cout << findmax(total, 0, 12);
}