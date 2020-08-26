#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,q;
	string s;
	cin >> n >> q >> s;
	int t, a, b;
	while(q--){
		cin >> t >> a >> b;
		a--;b--;
		if(t==1){
			swap(s[a], s[b]);
		}
		else{
			string s1 = s.substr(a, b-a+1);
			reverse(s1.begin(), s1.end());
			s.replace(a, b-a+1, s1);
		}
	}
	
	cout << s << endl;
}
