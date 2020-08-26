#include <bits/stdc++.h>

using namespace std;

int knapSack(int W, int wt[], int val[], int n){ 
	if(n == 0 || W == 0){
		return 0; 
	}

    if(wt[n-1] > W){
		return knapSack(W, wt, val, n-1); 
	}
    else{
		return max( 
			val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
			knapSack(W, wt, val, n-1)
		);
	}
}

int main(){
//	freopen("input.txt", "r", stdin);
	
	int max_time, n;
	cin >> max_time >> n;
	
	string name1;
	string name2;
	int score[n];
	int time[n];
	
	for(int i=0; i<n; i++){
		cin >> name1 >> name2 >> score[i];
		
		int name1_length = name1.length();
		int name2_length = name2.length();
		int max_loop = min(name1_length, name2_length);
		
		time[i] = abs(name1_length - name2_length);
		
		for(int j = 0; j<max_loop; j++){
			if(name1[j] != name2[j]){
				time[i]++;
			}
		}
	}
	
	cout << knapSack(max_time, time, score, n) << endl;
}
