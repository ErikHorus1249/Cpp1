#include<bits/stdc++.h>
using namespace std;
int a[100], n;
void nhap(){
	for(int i = 0; i < n; i++) cin >> a[i];
}

void xuat(){
	for(int i = 0; i < n; i++) cout << a[i] << ' ';
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		nhap();
		int check = 0;
		int i = n-2;
		while (a[i]>=a[i+1]) {
			i--;
		}
		if(i>=0){
			int k = n-1;
			while(a[i]>=a[k]){
				k--;
			}
			swap(a[i],a[k]);
			sort(a+i+1, a+n);
		}else{
			check = 1;
		}
		if(check){
			for(int i = 0; i < n; i++){
				cout << i+1 << ' ';
			}
		}else xuat();
		cout << endl;
	}
}
