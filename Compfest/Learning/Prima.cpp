#include <bits/stdc++.h> 
#define MAX_SIZE 1000005 

using namespace std; 

void SieveOfEratosthenes(vector<int> &primes){ 
	bool IsPrime[MAX_SIZE]; 
	memset(IsPrime, true, sizeof(IsPrime)); 
	
	for (int p = 2; p * p < MAX_SIZE; p++){ 
		if (IsPrime[p] == true){ 
			for (int i = p * p; i < MAX_SIZE; i += p) 
				IsPrime[i] = false; 
		} 
	} 
	
	for (int p = 2; p < MAX_SIZE; p++) 
	if (IsPrime[p]) 
			primes.push_back(p); 
			
} 

int main(){ 
	vector<int> primes; 
	
	SieveOfEratosthenes(primes); 

	int n, k;
	cin >> n >> k;
	cout << primes[0] << endl;
	
	for(int i=1; i<n; i++){
		cout << primes[i*k] << endl;
	}

	return 0; 
} 

