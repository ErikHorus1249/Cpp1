#include<bits/stdc++.h>

using namespace std;
void process(int a[], int n, int k){
  int i = k-1;
  while(i > 0 && a[i] == n - k + i + 1){
    i--;}

  
  if(i > 0){
    a[i] ++;
    for(int j = i+1; j < k; j++){
      a[j] = a[i] + j - i;
    }
  }else{
    for(int i = 0; i < k; i++){
      a[i] = i;
    }
  }
  for(int i = 0; i < k; i++){
    cout << a[i] << " ";
  }
}
int main(){
  int t,n,k;

  cin >> k >> n >> k;
  int a[k];

  for(int i = 0; i < k; i++){
    cin >> a[i];

  }
  process(a,n,k);
  return 0;
}
