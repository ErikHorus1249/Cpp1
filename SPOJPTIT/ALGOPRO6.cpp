#include<bits/stdc++.h>

using namespace std;

int main(){
  long long a,b=0,c;
  cin >> a;
  c = a;
  long long val = 3584;
  while(c > 0){
    b += c%10;
    c = c/10;
  }
  val += b*365;
  if((a%4==0&&a%100!=0)||a%400==0){
    val += (b+2+9+2);
  }
  cout << val;
}
