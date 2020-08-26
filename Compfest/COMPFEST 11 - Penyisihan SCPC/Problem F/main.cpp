#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	
	int data[26];
	for(int i='A'; i<='Z'; i++){
		data[i] = 0;
	}
	
	int n, m;
	cin >> n >> m;
	
	string word;
	cin >> word;
	for(int i=0; i<n; i++){
		data[word[i]] = 1;
	}
	
	char c;
	string change;
	for(int i=0; i<m; i++){
		cin >> c >> change;
		
		if(data[c]){
			int change_length = change.length();
			int found = data[c];
			data[c] = 0;
			
			for(int j=0; j<change_length; j++){
				data[change[j]] += found;
			}	
		}
	}
	
	// print
	int total = 0;
	for(int i='A'; i<='Z'; i++){
		total += data[i];
	}
	cout << total << endl;
}
