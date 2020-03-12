#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin >> n;
	int a[n][n];
	int b[n][n];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i<n; i++){
			int node = n-1;
		for(int j = 0; j<n; j++){
			b[node][i] = a[i][j];
			node--;
		}
	}
		for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cout << b[i][j]<< " ";
		}
		cout << endl;
	}
}
