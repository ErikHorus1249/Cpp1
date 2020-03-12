
// bai 4
#include<iostream>

using namespace std;

int main(){
	float n;
	float s;
	while(1){
		cout << "Nhap vao n :\n";
		cin >> n;
		if(n>=10 && n<=100){
			break;
		}
	}
	cout << "Danh sach : ";
	for(int i = 2*n; i<=3*n; i++){
		if(i%9==2){
			cout << i << " ";
		}
	}

}
