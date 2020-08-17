#include<bits/stdc++.h>

using namespace std;

map<long long, bool> d;
int u[20];
vector< int > a;
long long res;

void Try(int i, int n){
	for(int j=0; j <= 1; j++){
		u[i] = j;
		
		if(i==n-1){
			long long ans = 0;
			for(int l = 0; l < n; l++){
				if(u[l]==1)
					ans = ans*10 + a[l];
			}
			
			if(d[ans]==true && ans !=0 && res <= ans) res = ans;
			
		}
		else Try(i+1,n);
	}
}
int main(){
	for(int i = 1; i<=1000000; i++) d[i*i*i] = true;
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		a.clear();
		while(n){
			a.push_back(n%10);
			n /= 10;
		}
		reverse(a.begin(),a.end());
		res = -1;
		Try(0,a.size());
		cout << res << endl;
	}	
}
