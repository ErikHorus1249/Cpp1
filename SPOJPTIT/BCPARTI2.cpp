#include<iostream>

using namespace std;


int main(){
	int n,t;
	int a[1003];
	a[1] = 1;
	a[2] = 2;
	
	cin >> t;
	for(int i = 1; i <=t; i++){
		cin >>n;
		for(int j = 3; j <= n; j++){
			int s = 1;
			for(int k=1; k <= j/2; k++){
				s+= a[k];
			}
			a[j] = s;
		}
		cout << i << " " << a[n] << endl;
	}
	return 0;
}
