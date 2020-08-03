#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,m,k;
  cin >> m >> n >> k;
  int max = 0, s = 0;
  if((m/2)<n) max = m/2;
  else max = n;

  s = (n-max) + (m - max*2);
  
  if(k < s){
    cout << max;
    return 0;
  }
  k = k - s;
  if(k%3 == 0) cout << max - (k/3);
  else cout << max - 1 - (k/3);
  return 0;
}
