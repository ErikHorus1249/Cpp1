#include<iostream>
using namespace std;

string Col(long x){
	char c;
	string tmp;
	while(true){
		if(x==0){
			break;
		}else{
			x--;
			c = 'A' + x%26;
			tmp += c;
			x = x/26;
		}
	}
	return tmp;
}
int main(){
	char col,row;
	int c, r;
	while(true){
	cin >> col >> c>> row >> r;
	cout << Col(c) << r;
}
}
