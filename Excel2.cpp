#include<bits/stdc++.h>
using namespace std;


string collum(long x){
	char c;
	string tmp = "";
	while(1){
		if(x==0) break;
		x--;
		c = 'A' + x%26;
		tmp = c + tmp;
		x = x/26;
	}
	return tmp;
	}
int main(){
	
	long rol, col;
	char tmp;

	while(1){
		cin >>tmp >> rol >> tmp >> col;
		if(rol==0 &&col ==0) break;
		cout << collum(col) << rol  << endl;
	}
	
	return 0;
}
