#include<bits/stdc++.h>

using namespace std;
int a[11], n;
void khoi_tao(){
  for(int i = 0; i < n; i++) a[i] = i+1;
}
void xuat(){
  for(int i = 0; i < n; i++){
    cout << a[i];
  }
  cout << ' ';
}
int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> n;
    khoi_tao();
    int check = 1;
    while(check){
      xuat();
      int i = n - 2;
      while(a[i]>=a[i+1]){
        i--;
      }
      if(i>=0){
        int k = n-1;
        while(a[i]>=a[k]){
          k--;
        }
        swap(a[i],a[k]);
        sort(a+i+1,a+n);
      }
      else check = 0;
    }
    cout << endl;
  }
}
