#include <bits/stdc++.h>

using namespace std;

int main(){
  while (1) {
    string a;
    cin >> a;
    if(a == "0") break;
    else{
      int s = 0;
      for(int i = 0; i < a.size(); i++){
        int so = a[i] - 48;
        if(so > 4) so -= 1;
        s = s * 9 + so;
      }
      cout << a<<": "<< s << endl;
    }
  }
  return 0;
}
