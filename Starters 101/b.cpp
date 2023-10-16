//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int l, a, b; cin >> l >> a >> b;
    int x = (l + a - 1) / a;
    int y = (l + b - 1) / b;
    if(x <= y) cout << -1 << "\n";
    else cout << (x - y - 1) << "\n";
  }
  return 0;
}
