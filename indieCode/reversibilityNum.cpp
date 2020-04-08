#include<iostream>
using namespace std;


bool thuannghich(int n){
	int tg = n;
	int tmp = 0;
	while(n>0){
		tmp = tmp*10 + n%10;
		n/=10;
	}
	if(tg == tmp) return true;
	else return false;
	
}

bool chia(int n){
	int dem = 0;
	while(n>0){
		dem += n % 10;
		n /= 10;
	}
	if(dem % 10 == 0) return true;
	else return false;
}

int main(){
	int n;
	int count = 0;
	for(n = 100000; n<999999; n++){
		if(thuannghich(n)&&chia(n)){
			cout << n;
			cout << "\n";
			
		}
	}
}
