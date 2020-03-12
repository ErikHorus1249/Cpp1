#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[1003];
	a[1] = 1;
	a[2] = 2;
	int n, s,t, c = 0;
	cin >> t;
	while(t--){
		cin >> n;
		c++;
		for(int i = 3; i<=n; i++){
			s = 1;
			for(int j = 1; j <= i/2; j++){
				s += a[j];
			}
			a[i] = s;
		}
		cout << c << " " << a[n] << endl;
	}
	return 0;
}
