#include<bits/stdc++.h>

using namespace std;

int main(){
  long long t;
  cin >> t;
  while(t--){
    int k;
    cin >> k;
    char a[100];
    for(int i = 0; i < k; i++){
      a[i] = 'A';
    }
    // cout << a << endl;
    bool check = true;
    while(1){
      cout << a << " ";
      for(long long i = k-1; i >= 0; i--){
        if(a[i] == 'A'){
          a[i] = 'B';
          for(long long j = i+1; j<k; j++) a[j] = 'A';
          break;
        }
        else if(i==0){
          check = false;
        }
      }

      if(!check) break;
    }
    cout << endl;
  }
}
