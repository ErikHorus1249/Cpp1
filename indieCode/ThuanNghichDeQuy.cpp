#include<bits/stdc++.h>

using namespace std;

int main(){
	int arr[1003];
	arr[1] = 1;
	arr[2] = 2;
	int t,n,c=0;
	cin >> t;
	while(t--){
		c++;
		cin >> n;
		for(int i = 3; i<=n; i++){
			int S = 1;
			for(int j = 1; j<=i/2; j++){
				S += arr[j];
			}
			arr[i] = S;
		}
		cout << c << " "<< arr[n] << endl;
	}
	return 0;
}
/*M?t bi?u di?n c?a m?t s? nguy�n duong N du?i d?ng t?ng c�c s? nguy�n duong nh? hon ho?c b?ng N du?c g?i l� partition c?a s? N. V� d? v?i N =15 ta c� th? bi?u di?n: 15 = 1+2+3+4+5 = 1+2+1+7+1+2+1.  
M?t partition du?c g?i l� thu?n ngh?ch n?u d?c theo c? hai chi?u d?u du?c k?t qu? gi?ng nhau. V� d? {1+2+1+7+1+2+1} l� m?t partition c?a 15 tho? m�n t�nh ch?t thu?n ngh?ch.  M?t partition du?c g?i l� thu?n ngh?ch d? quy n?u n?a b�n tr�i c?a n� cung thu?n ngh?ch d? quy ho?c r?ng. V?i d?nh nghia n�y, m?i s? N s? hi?n nhi�n s? c� hai partition thu?n ngh?ch d? quy l� d�y N s? 1 v� d�y ch? g?m duy nh?t s? N.  
V� d?, c�c partition thu?n ngh?ch d? quy c?a 7 l�:  7, 1+5+1, 2+3+2, 1+1+3+1+1, 3+1+3, 1+1+1+1+1+1+1  
Vi?t chuong tr�nh nh?p v�o s? t? nhi�n N v� dua ra s? partition thu?n ngh?ch d? quy c?a N.-*/
