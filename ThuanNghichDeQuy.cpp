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
/*M?t bi?u di?n c?a m?t s? nguyên duong N du?i d?ng t?ng các s? nguyên duong nh? hon ho?c b?ng N du?c g?i là partition c?a s? N. Ví d? v?i N =15 ta có th? bi?u di?n: 15 = 1+2+3+4+5 = 1+2+1+7+1+2+1.  
M?t partition du?c g?i là thu?n ngh?ch n?u d?c theo c? hai chi?u d?u du?c k?t qu? gi?ng nhau. Ví d? {1+2+1+7+1+2+1} là m?t partition c?a 15 tho? mãn tính ch?t thu?n ngh?ch.  M?t partition du?c g?i là thu?n ngh?ch d? quy n?u n?a bên trái c?a nó cung thu?n ngh?ch d? quy ho?c r?ng. V?i d?nh nghia này, m?i s? N s? hi?n nhiên s? có hai partition thu?n ngh?ch d? quy là dãy N s? 1 và dãy ch? g?m duy nh?t s? N.  
Ví d?, các partition thu?n ngh?ch d? quy c?a 7 là:  7, 1+5+1, 2+3+2, 1+1+3+1+1, 3+1+3, 1+1+1+1+1+1+1  
Vi?t chuong trình nh?p vào s? t? nhiên N và dua ra s? partition thu?n ngh?ch d? quy c?a N.-*/
