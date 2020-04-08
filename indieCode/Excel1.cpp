#include<bits/stdc++.h>
using namespace std;

string colum(long x){
	string tmp;
	char c;
	while(x>0){
		x--;
		c = 'A' + x%26;
		tmp = c + tmp;
		x /= 26;
	}
	return tmp;
}
int main(){
	char tmp;
	long c, r;
	while(1){
			cin >> tmp >> r >> tmp >> c;
			if(c == 0 && r == 0){
				break;
			}
			cout << colum(c) << r<< endl;
	}
	
}
