#include<bits/stdc++.h>

using namespace std;
void  xuat(int a[100], int n){
  for(int i = 0; i < n; i++) cout << a[i] << ' ';
}
int main(){
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i<n; i++) cin >> a[i];
    int check = 0;
    int i = n-2;
    while(a[i]>=a[i+1]){
      i--;
    }
    if(i>=0){
      int k = n-1;
      while(a[i] >= a[k]){
        k--;
      }
      swap(a[i],a[k]);
      sort(a+i+1,a+n);
    }else check = 1;
    if(check){
      for(int i = 0; i<n; i++){
        cout << i+1 << ' ';
      }

    }
    else xuat(a,n);
    cout << endl;
  }
}
