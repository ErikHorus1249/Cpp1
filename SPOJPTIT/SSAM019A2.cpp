#include<iostream>

using namespace std;

int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n%2==0){
			int m;
			int count = 0;
			while(1){
				if(n%2==0){
					count ++;
					n /=2;
					if(n==0) break;
				}
				else{
					count++;
					break;
				}
					
			}
			cout << count<< endl;
		}
		else 
		cout << "0" << endl;
	}
}
