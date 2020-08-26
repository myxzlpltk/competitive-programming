#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s, s1;
	while(n--){
		cin >> s;
		s1 = s;
		reverse(s1.begin(), s1.end());
		
		if(s == s1){
			cout << "palindrom\n";
		}
		else{
			cout << "bukan palindrom\n";
		}
	}
}
