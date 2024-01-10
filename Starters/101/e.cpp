//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int a, b; cin >> a >> b;
    int x = a^b;
    int ans;
    for(int i = 0; i < 31; i++) {
      if(x & (1 << i)) {
        ans = (1 << i);
      }
    }
    ans ^= a;
    cout << ans << "\n";
  }
  return 0;
}
