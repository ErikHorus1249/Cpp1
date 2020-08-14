
#include <bits/stdc++.h>
using namespace std;


int *khoi_tao(int &n, int &k, int *a){
	cin >> n >> k;
	a = new int[k];
	for(int i = 0; i < k; i++){
		cin >> a[i];
	}
	return a;
}


int main(){
  int t;
  cin >> t;
	while (t--) {
    int n, k, *a;
  	a = khoi_tao(n, k, a);
    int  i = k - 1;
    bool check = true;
  	while(i >= 0 && a[i] == n - k + i + 1){
  		i--;
  	}
  	if(i >= 0){
      check = false;
  		a[i]++ ;
  		for(int j = i + 1; j < k ; j ++){
  			a[j] = a[j-1] +1 ;
  		}
  	}
    for(int i = 0; i < k; i++){
      if(check) a[i] = i+1;
      cout << a[i] << " ";
    }
    cout << endl;
  }
	return 0;
}
