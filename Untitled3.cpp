#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int x1, x2, x3, y1, y2, y3;
	float l1, l2, l3;
	cout << "Nhap vao toa do diem M :";
	cin >> x1;
	cin >> y1;
	cout << "\nNhap vao toa do diem N :";
	cin >> x2;
	cin >> y2;
	cout << "\nNhap vao toa do diem P :";
	cin >> x3;
	cin >> y3;
	cout << endl;
	
	l1 = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
	l2 = sqrt(pow((x1-x3),2) + pow((y1-y3),2));
	l3 = sqrt(pow((x3-x2),2) + pow((y3-y2),2));
	cout << "Do dai doan MN la : "<< l1 << endl;;
	cout << "Do dai doan MP la : "<< l2 << endl;
	cout << "Do dai doan NP la : "<< l3 << endl;
	
	if(l1+l2 >= l3 && l1+l3 >= l2 && l2+l3 >= l1){
		cout << "M , N , P tao thanh tam giac !";
	}
	else{
		cout << "M , N , P Khong tao thanh tam giac !";
	}

}
