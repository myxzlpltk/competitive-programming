#include <bits/stdc++.h>

using namespace std;

int faktorial(int n){
	if(n == 1)
		return n;
	else
		return faktorial(n-1)*n;
}

void print(vector<int> &data){
	int n=data.size();
	for(int i=0; i<n; i++){
		cout << data[i];
		if(i<n-1){
			cout << ' ';
		}
	}
	cout << endl;
}

bool isvalid(vector<int> data, int k){
	int n = data.size();
	for(int i=0; i<n-1; i++){
		if(abs(data[i]-data[i+1]) > k){
			return false;
		}
	}
	return true;
}

int main(){
	int n, k;
	cin >> n >> k;
	
	vector<int>data;
	for(int i=1; i<=n; i++){
		data.push_back(i);
	}
	
	int permute = faktorial(n);
	for(int i=0; i<permute; i++){
		if(isvalid(data, k)){
			print(data);
		}
		next_permutation(data.begin(), data.end());
	}
}
