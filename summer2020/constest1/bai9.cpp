#include<bits/stdc++.h>

using namespace std;
int n, m, a[100], check;
long long res;


void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == m -1){
			long long s = 0;
			for(int k = 0; k < m ; k++) s = s*10 + a[k];
			s *= 9;
			if(s%n == 0 && s >= n){
				check = 0;
				res  =  min(res,s);
			}
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		res = 1e18;
		check = 1;
		m = 1;
		while(m <= 17 && check){
			Try(0);
			m ++;
		}
		cout << res << endl;
	}
}

