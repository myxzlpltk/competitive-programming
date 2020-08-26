#include <bits/stdc++.h>

using namespace std;

int knapSack(int W, int wt[], int val[], int n){ 
	if(n == 0 || W == 0)
		return 0; 

	if(wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);
	else
		return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
}

int main(){
	int n, m;
	cin >> n >> m;
	int val[n], wt[n];
	for(int i=0; i<n; i++){
		cin >> val[i];
		wt[i] = val[i];
	}
	if(knapSack(m, wt, val, n) == m){
		cout << "bisa" << endl;
	}
	else{
		cout << "tidak bisa" << endl;
	}
}
