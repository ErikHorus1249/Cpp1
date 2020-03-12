#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, tmp;
	int a[n];
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = i+1; j<n; j++){
			if(a[i]>a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(int i = 0; i<n; i++){
		cout << a[i] << endl;
	}
}
