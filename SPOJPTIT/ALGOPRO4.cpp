#include<bits/stdc++.h>

using namespace std;

int main(){
  string a;
  cin >> a;
  while (a.size()%3 != 0) {
    a = '0' + a;
  }
  string find = "";
  for(long long i = 0; i < a.size(); i++){
    find += a[i];
    if((i+1)%3 == 0 && i != 0){
      if(find == "000") cout << 0;
      if(find == "001") cout << 1;
      if(find == "010") cout << 2;
      if(find == "011") cout << 3;
      if(find == "100") cout << 4;
      if(find == "101") cout << 5;
      if(find == "110") cout << 6;
      if(find == "111") cout << 7;
      find = "";
    }
  }
}
