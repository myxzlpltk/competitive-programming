#include <iostream>

using namespace std;

int main(){
	int N, M, R, S;
	cin >> N >> M >> R >> S;
	R++;
	S++;
	int partisi = R*S;
	int tpartisi[partisi];
	int temp;
	
	for(int i=0;i<partisi;i++){
		tpartisi[i] = 0;
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			int ip = i/(N/R);
			int jp = j/(M/S);
			int index = ip*S+jp;
			
			if(i==N-1&&N%2==1){
				index-=S;
			}
			if(j==M-1&&M%2==1){
				index-=1;
			}
			
			cin >> temp;
			tpartisi[index] += temp;
		}
	}
	
	int max = 0;
	for(int i=0;i<partisi;i++){
		if(tpartisi[i]>max){
			max = tpartisi[i];
		}
	}
	
	cout << max;
}
