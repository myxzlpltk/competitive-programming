#include <bits/stdc++.h>

using namespace std;

void print(double med){
	ostringstream streamObj;
	streamObj << fixed << setprecision(15) << med;
	string s = streamObj.str();
	
	s.erase(s.find_last_not_of('0')+1);
	s.erase(s.find_last_not_of('.')+1);
	cout << s << endl;
}

int main(){
//	freopen("Menghitung Median.txt", "r", stdin);
	
	int n, x;
	cin >> n;
	
	priority_queue<int> s;
	priority_queue<int, vector<int>, greater<int> > g;
	
	cin >> x;
	s.push(x);
	
	double med = x;
	print(med);
	
	for(int i=1; i<n; i++){
		cin >> x;
		
		// kiri > kanan
		if(s.size() > g.size()){
			if(x < med){
				// ke kiri
				g.push(s.top());
				s.pop();
				s.push(x);
			}
			else{
				// ke kanan
				g.push(x);
			}
			med = (double)(s.top()+g.top())/2.0;
		}
		// seimbang
		else if(s.size() == g.size()){
			if(x < med){
				// ke kiri
				s.push(x);
				med = (double)s.top();
			}
			else{
				// ke kanan
				g.push(x);
				med = (double)g.top();
			}
		}
		// kanan > kiri
		else{
			if(x > med){
				// ke kanan
				s.push(g.top());
				g.pop();
				g.push(x);
			}
			else{
				// ke kiri
				s.push(x);
			}
			med = (double)(s.top()+g.top())/2.0;
		}

		print(med);
	}
}
