//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   if(n & 1) {
    cout << 1 << " " << n - 1 << "\n";
    return;
   }
   for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
        if((i ^ j) == n) {
            cout << i << " " << j << "\n";
            return;
        }
    }
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   if(__builtin_popcount(n) == 1) {
    cout << "-1\n";
   }
   else {
    for(int i = 0; i < 30; i++) {
        if(n >> i & 1) {
            cout << (1 << i) << " " << (n ^ (1 << i)) << "\n";
            return;
        }
    }
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}