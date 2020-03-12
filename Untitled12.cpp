#include<iostream>

using namespace std;

int main(){
	int n, s = 0;
	while(1){
		cin >> n;
		if(n >= 5 && n <= 50){
			break;
		}
	}
	for(int i = 0; i<=n; i++){
		if(i % 5 == 0){
			cout << i << " ";
			s++;
		}
	}
	cout << endl;
	cout << "So cac so chia het cho 5 : " << s;
}
