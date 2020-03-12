#include<iostream>

using namespace std;

int main(){
	int s,n;
	while(1){
		cout << "Nhap vao n :\n";
		cin >> n;
		if(n>=5 && n<=20){
			break;
		}
	}
	int a[n];
	cout << "Nhap vao phan tu a :";
	for(int i = 0; i< n; i++){
		cin >> a[i];
	}
	
	cout << "Cac so chan : ";
	for(int i = 0; i < n; i++){
		if(a[i]%2==0){
			cout << a[i] << " ";
			s += a[i];
		}		
	}
	cout << endl;
	cout <<"Tong : " <<s;
}
