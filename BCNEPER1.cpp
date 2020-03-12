/*

BCNEPER - Hoan vi ke tiep
viet chuong trinh nhap vao mot chuoi ki tu so sau do xuat ra
hoan vi ke tiep cua no(la mot hoan vi cac so nguyen lon hon tiep theo)
VD :
123 -> 132
279134399742 -> 279134423799
*/
#include<bits/stdc++.h>
using namespace std;

void KhoiTao(int a[], string num, int n){
	for(int i = 0; i <= n; i++){
		a[i] = (num[i]-'0');
	}
}
void xuat(int a[], int n, int dem){
	cout << dem<<" ";
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << endl;
}
bool isBIGEST(int a[], int n){
	for(int i = 0; i <n; i++){
		if(a[i]<a[i+1]) return false;
		break;
	}
	return true;
}
void SinhHV(int a[], int n, int dem){
	if(isBIGEST(a,n)) cout << dem << " " << "BIGEST" << endl;
	while(!isBIGEST(a,n)){
		int i;
		for (i=n;i>0;i--){
			if (a[i]>a[i-1]) break;
		}
		i--;
		for (int j=n;j>=i;j--){
			if (a[j]>a[i]){
				swap(a[i],a[j]);
				for(int m = i+1;m<n; i--)
				xuat(a,n,dem);
				break;
			}
		}
		break;
	}
}
int main(){
	int t,dem;
	string num;
	cin >> t;
	while(t--){
		cin >> dem >> num;
		int n = num.length();
		int a[90];
		KhoiTao(a,num,n);
		//xuat(a,n,dem);
		SinhHV(a,n,dem);
	}
	return 0;
}
