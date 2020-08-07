//Thuat toan sinh ke tiep
// Tap con
#include <iostream>
using namespace std;
#include <iomanip>
// Ham khoi tao ban dau
int *khoi_tao(int &n, int &k, int *a){
	cin >> n >> k;
	a = new int [k];
	for(int i = 0; i < k; i++){
		a[i] = i + 1;
	}
	return a;
}
// Ham in ket qua
void ket_qua(int *a, int k){
	for(int i = 0; i < k; i++) {
		cout << a[i];
	}
	cout << " ";
}
// Ham sinh day ke tiep
void ham_sinh(int *a, int n, int k, int &stop){
	int  i = k - 1;
	while(i >= 0 && a[i] == n - k + i + 1){
		i--;
	}
	if(i >= 0){
		a[i]++ ;
		for(int j = i + 1; j < k ; j ++){
			a[j] = a[i] + j - i ;
		}
	} else{
		stop = 1;
	}
}
// Ham xu ly
void xu_ly(int *a, int n, int k, int &stop){
	while ( !stop ){
		ket_qua(a, k);
		ham_sinh(a, n, k, stop);
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while (t--) {
		int n, k, stop = 0, *a;
		a = khoi_tao(n, k, a);
		xu_ly(a, n, k, stop);
	}

	return 0;
}
