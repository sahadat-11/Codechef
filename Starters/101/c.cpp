//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, m; cin >> n >> m;
    int mn = INT_MAX;
    string a, b; cin >> a >> b;
    for(int i = 0; i <= n - m; i++) {
      string x = a.substr(i, m);
      int tem = 0;
      for(int j = 0; j < m; j++) {
         tem += abs(min(10 - abs(x[j] - b[j]),abs(x[j] - b[j])));
      }
      mn = min(tem, mn);
    }
    cout << mn << "\n";
  }
  return 0;
}
