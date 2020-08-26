#include <bits/stdc++.h>
using namespace std;

int main(){
  int T; cin>>T;
  while(T--){
    int n, m, k;
    cin>>n>>m>>k;
    int sum = m;
    map<int,int>spesial;
    while(m--){
      int x; cin>>x;
      spesial[x] = 1;
    }
    int counter = 1;
    while(counter <= n){
      if(spesial.count(counter)){
        counter++;
      }
      else{
        sum++;
        counter+=k;
      }
    }
    cout<<sum<<endl;
  }
}
