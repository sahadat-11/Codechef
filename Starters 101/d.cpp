//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, h; cin >> n >> h; int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int sum = 0, ans = 0;
    sort(a, a + n, greater<int>());
    for(int i = 0; i < n; i++) {
      sum += a[i];
      if(sum >= h) {
        ans = a[i]; break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
