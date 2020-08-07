#include<bits/stdc++.h>

using namespace std;
int a[100], n, k;

void Try(int i){
  for(int j = 1; j <= n; j++){
    a[i] = j;
  }
  if(i==k-1){
    for(int m = 0; m < k; m++ ) cout << a[m];
  }else Try(i+1);
}
int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> n >> k;
    Try(0);
    cout << endl;
  }
}
