#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];
int stop = 0;

void init(){
  cin >> n;
  k = 1;
  a[k] = n;
}

void res(){
  for(int i = 1; i < k; i++){
    if(i < k) cout << "(";
    cout << a[i];
    if(i < k) cout << " ";
    else cout << ")";
  }
}

void sinh(){
  int i = k;
  while(i>0 && a[i]==1) i--;
  if(i <= 0) stop = 1;
  else{
    a[i] -= 1;
    int d = k - i +1;
    k = i;
    for(int j = i+1; j <= i+d/a[i]; i++)
      a[j] = a[i];
    k += d/a[i];
    if(d%a[i]){
      a[++k] = d%a[i];
    }
  }
}
int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> n;
    int stop = 0;
    init();
    while(!stop){
      res();
      sinh();
    }
    cout << endl;
  }
}
