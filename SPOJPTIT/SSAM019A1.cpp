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
			for(int i=2; i<= n; i++){
				if(n%i==0 && i % 2 == 0){
					count++;
				}
			}
			cout << count << endl;
		}
		else 
		cout << "0" << endl;
	}
}
