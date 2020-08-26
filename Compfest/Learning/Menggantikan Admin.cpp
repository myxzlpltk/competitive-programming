#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	string order, name;
	map<string, int> names;
	while(n--){
		cin >> order >> name;
		if(order == "DAFTAR"){
			if(names.count(name) > 0){
				names[name]++;
			}
			else{
				names.insert(pair<string, int>(name, 1));
			}
		}
		else{
			cout << names[name] << endl;
		}
	}
}
