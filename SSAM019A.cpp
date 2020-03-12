#include<iostream>

int main(){
	int t,n;
	std::cin >> t;
	while(t--){
		std::cin >> n;
		int count = 0;
		for(int i = 1; i<= n; i++){
			if(n%i==0&&i%2==0){
				count ++;
			}
		}
		std::cout << count << "\n";
	}
	return 0;
}
