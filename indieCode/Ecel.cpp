#include<bits/stdc++.h>
using namespace std;

string colum(int x){
	string tmp = "";
	char result;
	while(x>0){
		 x--;
		 result = 'A' + x%26;
		 tmp =  result + tmp; 
		 x = x/26;
	}
	return tmp;
}
int main(){
	char tmp;
	long r, c;
	while(true){
	cin >> tmp >> r >> tmp >> c;
	if(r == 0 && c == 0){
		break;
	}
	else{
	cout << colum(c) << r << endl;
}
}
}
