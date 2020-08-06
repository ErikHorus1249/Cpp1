#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> k >> n;
    // cout << n << k;
    int a[n];
    for(int i = 0; i < k; i++) cin >> a[i];
    int i = k-1;
    bool check = true;
    while(i>=0 && a[i] == n-k+i+1){
      check = false;
      i --;
    }
    // cout << i;
    if(i>=0){
      a[i]++;
      for(int j = i+1; j < n; j++){
        a[j] = a[j-1] + 1;
      }
    }

    for(int i = 0; i < k; i++){
      if(check){
        a[i] = n - (k-i) + 1;
      }
      cout << a[i];
    }
    cout << endl;
  }
}
