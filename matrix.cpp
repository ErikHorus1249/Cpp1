#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int node;
	int a[n][n];
	for(int i = 0; i<n; i++){
		node = n;
		for(int j = 0; j<n; j++){
			if(j<=i){
				a[i][j] = node--;
			}
			else{
				a[i][j] = n-i;
			}
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
