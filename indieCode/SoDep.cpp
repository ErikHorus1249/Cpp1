#include<bits/stdc++.h>

using namespace std;

bool nguyenTo(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}
void ktSoDep(int a, int b){
	bool kt, kt1;
	for(int j = a; j <= b; j++){
		kt = 0;
		kt1 = 1;
		for (int i = 2; i <= j; i++)
		{
			if(nguyenTo(i)){
				if(j % i == 0)
					kt = 1;
					if(j % i*i !=0)
						kt1 = 0;
			}
		}
		if(kt && kt1) cout << j;
	}
}
int main(){
	int a, b;
	cin >> a>>b;
	ktSoDep(a, b);
	
}