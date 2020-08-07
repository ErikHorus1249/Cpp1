#include<bits/stdc++.h>

using namespace std;
int a[100], k,n;

void init(){
  for(int i = 0; i < k;i++) a[i] = i+1;
}
void xuat(){
  for(int i = 0; i < k; i++) cout << a[i];
}
int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> n >> k;
    init();
    int check = 1;

    while(check){
      int i = k-1;
      xuat();
      cout << ' ';
      while(a[i]==n-k+i+1){
        i--;
      }
      if(i>=0){
        a[i]++;
        for(int k = i+1; k < n; k++) a[k] = a[k-1]+1;
      }else check = 0;

    }
    cout << endl;
  }
}
