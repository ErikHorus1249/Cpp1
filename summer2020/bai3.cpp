#include<bits/stdc++.h>

int main(){
	int s[1010];
	int n,k;
	std::cin >> n >> k;
	while(n--){
		std::cin >> k;
		// int leg = strlen(s);
		std::cout << k << " ";
		if(std::next_permutation(s,s+leg)){
			for(int i = 0; i< leg; i++){
				std::cout << s[i];
			}
			std::cout<<"\n";
		}
		else std::cout << "BIGEST";
	}

}
