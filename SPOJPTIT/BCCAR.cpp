#include <bits/stdc++.h>

using namespace std;

int main(){

  long long t,n;
  cin >> t;
  while (t--) {
    cin >> n;
    long long a[n+1];
    for(long long i = 0; i < n; i++){

      cin >> a[i];

    }
    sort(a, a+n);
    cout << 2*(a[n-1] - a[0]) << endl;
  }
  return 0;
}
