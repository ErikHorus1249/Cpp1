
#include <bits/stdc++.h>
using namespace std;


int *khoi_tao(int &n, int &k, int *a){
	cin >> n >> k;
	a = new int[k];
	for(int i = 0; i < k; i++){
		a[i] = i+1;
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
    int dem = 0;
    while(!dem){
      for(int i = 0; i < k; i++){
        cout << a[i];
      }

      while(i >= 0 && a[i] == n - k + i + 1){
    		i--;
        // dem ++;
        // cout <<"dem"<< dem;
    	}
    	if(i >= 0){
    		a[i]++ ;
    		for(int j = i + 1; j < k ; j ++){
    			a[j] = a[i] + j - i ;
    		}
    	}
      else{
        dem = 1;
      }

      cout << " ";
    }
    cout << endl;
  }
	return 0;
}
