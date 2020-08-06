#include<bits/stdc++.h>

using namespace std;

int main(){
  long long  t;
  cin >> t;

  while (t>0) {
    long long stt;
    cin >>stt;
    long long r;
    cin >> r;
    string a;
    cin >> a;
    cout << stt << " ";
    for(long long i = 0; i < a.size(); i++){
      for(long long j = 0; j < r; j++){
        cout << a[i];
      }
    }
    cout << endl;
    t--;
  }
}
