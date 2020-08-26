#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;

int main(){
//	freopen("input.txt", "r", stdin);
	
	int T;cin >> T;
	
	while(T--){
		int n, w, tmp;
		cin >> n >> w;
		int begin = 0, end = n-1;
		
		vector<ull> data;
		
		for(int i=0; i<n; i++){
			cin >> tmp;
			data.push_back(tmp);
		}
		
		sort(data.begin(), data.end());
		
		ull result = -1;
		ull temp;
		
		for(int i=w; i>=0; i--){
			int j = w-i;
			temp = data[end-j]-data[begin+i];
			if(temp < result || result == -1){
				result = temp;
			}
		}
		
		cout << result << endl;
	}
}
