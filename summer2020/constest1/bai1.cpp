#include<bits/stdc++.h>

using namespace std;

int main(){
  long long t;
  cin >> t;
  while(t--){
    string a;
    cin >> a;
    bool check = true;
    for(long long i = a.size()-1; i >= 0; i--){
      if(a[i] == '0'){
        check = false;
        a[i] = '1';
        for(long long j = i+1; j<a.size(); j++) a[j] = '0';
        break;
      }
    }
    if(check){
      for(long long i = 0; i < a.size(); i++){
        a[i] = '0';
      }
    }
    cout << a << endl;
  }
}
