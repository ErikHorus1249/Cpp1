#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int max = 2*n -1;
	int node = n/2;
	char a[n][max];
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<max; j++){
			a[i][j] = ' ';
			if(j >= max/2-i && j <= max/2+i){
				a[i][j] = '*';
			}
			
			cout << a[i][j]<<" ";

		}
		cout << endl;
	}
	return 0;
}
