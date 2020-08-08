#include<bits/stdc++.h>

using namespace std;
int n, k, check, a[100];


void init(){
  cin >> n;
  k = 1;
  a[k] = n;
}

void res(){
  for(int i = 1; i <= k; i++){
    if(i==1) cout << "(";
    cout << a[i];
    if(i < k) cout << " ";
    else cout << ") ";
  }
}

void sinh(){
  int i = k;
  // Tim den phan tu khong phai la 1
  while(i>0 && a[i] == 1) i--;
  if(i<=0) check = 0; // cau hinh cuoi cung
  else{
    a[i] --;
    int d = k - i +1; 
    k = i;
    for(int j = i+1; j <= i+d/a[i]; j++) a[j] = a[i];
    k += d/a[i];
    if(d%a[i]) a[++k] = d%a[i];
  }
}
int main(){
  int t;
  cin >> t;
  while(t--){
    check = 1;
    init();
    while(check){
      res();
      sinh();
    }
    cout << endl;
  }
}
