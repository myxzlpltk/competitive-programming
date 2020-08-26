#include <bits/stdc++.h>

using namespace std;

const int MAX = 20;
int store[MAX], n;
int graph[MAX][MAX];
int d[MAX];

bool is_clique(int b){
	for(int i=1; i<b; i++){
		for(int j=i+1; j<b; j++){
			if(graph[store[i]][store[j]] == 0){
				return false;
			}
		}
	}
	
	return true;
}

int maxCliques(int i, int l){
	int max_ = 0;
	
	for(int j=i+1; j<=n; j++){
		store[l] = j;
		if(is_clique(l+1)){
			max_ = max(max_, l);
			max_ = max(max_, maxCliques(j, l+1));
		}
	}
	
	return max_;
}

int main(){
	int m;
	cin >> n >> m;
	int edges[m][2];
	
	int a, b;
	for(int i=0; i<m; i++){
		cin >> a >> b;
		
		edges[i][0] = min(a,b);
		edges[i][1] = max(a,b);
		
		graph[edges[i][0]][edges[i][1]]	= 1;
		graph[edges[i][1]][edges[i][0]] = 1;
		d[edges[i][0]]++;
		d[edges[i][0]]++;
	}
	
	cout << maxCliques(0, 1) << endl;
}
