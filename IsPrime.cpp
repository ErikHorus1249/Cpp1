
#include<bits/stdc++.h>
using namespace std;

void isPrime(int n){
	bool mark[n+1];
	memset(mark,true,sizeof(mark));
	for(int i = 2; i<= sqrt(n); i++){
		if(mark[i]){
			for(int q = 2*i; q<n+1; q+=i){
				mark[q] = false;
			}
		}	
	}
	// in kq
	for(int i=2; i<n+1; i++){
		if(mark[i]){
			cout << i << " ";
		}
	}
}
int main(){
	int a, b;
	cin >> a >> b;
	isPrime(a);

}


