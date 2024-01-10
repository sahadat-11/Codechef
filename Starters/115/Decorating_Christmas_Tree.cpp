//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
void solve() {
  int n, x, y; cin >> n >> x >> y;
  int cnt = y / 3;
  cnt = min(cnt, x);
  x -= cnt;
  cnt += (x / 2);
  x %= 2; y %= 3;
  if(x and y >= 3) cnt++; // for corner case
  if(cnt >= n) cout << "YES\n";
  else cout << "NO\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}