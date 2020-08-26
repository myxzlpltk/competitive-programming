#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;

ull fpb(ull a, ull b){
	if(a==0){
		return b;
	}
	else{
		return fpb(b%a, a);
	}
}

ull kpk(ull a, ull b){
	return (a*b)/fpb(a, b);
}

int main(){
	ull a, b;
	cin >> a >> b;
	cout << kpk(a, b) << endl;
}
