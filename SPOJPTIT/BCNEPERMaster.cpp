#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
 
char s[1010];
 
int main() {

  int tt;
  scanf("%d", &tt);
  while (tt--) {
    int k;
    scanf("%d %s", &k, s);
    int n = strlen(s);
    printf("%d ", k);
    if (std::next_permutation(s, s + n)) {
      puts(s);
    } else {
      puts("BIGGEST");
    }
  }
}
