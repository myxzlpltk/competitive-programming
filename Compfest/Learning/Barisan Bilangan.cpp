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
	ull n, a, b;
	cin >> n >> a >> b;
	ull total;
	if(a != b){
		total = floor(n/a)+floor(n/b)-floor(n/kpk(a,b));
	}
	else{
		total = floor(n/a);
	}
	cout << total << endl;
}
