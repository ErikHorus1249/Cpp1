#include<bits/stdc++.h>

using namespace std;
int n, a[100];

void Try(int i){
  for(int j = 0; j <= 1; j++){
    a[i] = j;
    if(i == n-1){
      for(int k = 0; k < n; k++){
        if(a[k]) cout << 'B';
        else cout << 'A';
      }
      cout << ' ';
    }
    else Try(i+1);
  }
}
int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> n;
    Try(0);
    cout << endl;
  }
}
