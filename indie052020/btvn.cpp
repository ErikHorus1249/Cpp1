#include<bits/stdc++.h>


using namaspace std;
void Try(int j){
  if(j==0){
    int minj = a[i][j];
    for(int i = 0; i < m; i++){
      if(a[i][j] < minj) minj = a[i][j];
    }
  }
  int min = minj;
  
  for(int i = 1; i<m; i++){
    if(a[i][j] < minj) cout << a[i][j]<<" ";
  }
}
int main(){

  int m, n;

  cin >> m, n;
  int a[m][n], b[m][n];
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      cin >> a[i][j];
      b[i][j] = 1;
    }
  }
}
