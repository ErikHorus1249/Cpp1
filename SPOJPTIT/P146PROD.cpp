#include <bits/stdc++.h>

using namespace std;

int main(){

  long n;
  cin >> n;
  long long dem1 = 0;
  for(long long i = 0; i < n; i++){
    long long dem2 = 0;
    for(long long j = 0; j < 3; j++){
      long long x;
      cin >> x;
      dem2 += x;
    }
    if(dem2 >= 2) dem1+=1;
  }
  cout << dem1;
}
