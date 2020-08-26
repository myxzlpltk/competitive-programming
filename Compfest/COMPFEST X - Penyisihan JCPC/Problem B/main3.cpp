#include <bits/stdc++.h>

using namespace std;

int knapSackRec(int W, int wt[], int val[], int i, int** dp){ 
    if (i < 0) 
        return 0; 
    if (dp[i][W] != -1) 
        return dp[i][W]; 
  
    if (wt[i] > W) { 
        dp[i][W] = knapSackRec(W, wt, val, i - 1, dp); 
        return dp[i][W]; 
    } 
    else { 
        dp[i][W] = max( 
            val[i] + knapSackRec( 
                         W - wt[i], wt, val, i - 1, dp), 
            knapSackRec(W, wt, val, i - 1, dp)); 
  
        return dp[i][W]; 
    } 
} 
  
int knapSack(int W, int wt[], int val[], int n){ 
    int** dp; 
    dp = new int*[n]; 
  
    for (int i = 0; i < n; i++) 
        dp[i] = new int[W + 1]; 
  
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < W + 1; j++) 
            dp[i][j] = -1; 
    return knapSackRec(W, wt, val, n - 1, dp); 
}

int main(){
//	freopen("input.txt", "r", stdin);
	
	int max_time, n;
	cin >> max_time >> n;
	
	string name1, name2;
	int _score, _time;
	int score[n], time[n];
	
	int x = 0;
	
	for(int i=0; i<n; i++){
		cin >> name1 >> name2 >> _score;
		
		int name1_length = name1.length();
		int name2_length = name2.length();
		int max_loop = min(name1_length, name2_length);
		
		_time = abs(name1_length - name2_length);
		
		for(int j = 0; j<max_loop; j++){
			if(name1[j] != name2[j]){
				_time++;
			}
		}
		
		if(_time > max_time) continue;
		
		time[x] = _time;
		score[x] = _score;
		x++;
	}
	
	cout << knapSack(max_time, time, score, x) << endl;
}
