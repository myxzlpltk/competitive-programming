#include <bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin>>T;

  for(int i = 0; i<T; i++){
    string opsi; cin>>opsi;
    int saluran; cin>>saluran;
    if(opsi == "next"){
      if(saluran == 0){
        cout<<99<<endl;
      }
      else{
        cout<<saluran-1<<endl;
      }
    }
    else if(opsi == "prev"){
      if(saluran == 99){
        cout<<0<<endl;
      }
      else{
        cout<<saluran+1<<endl;
      }
    }

  }
}
