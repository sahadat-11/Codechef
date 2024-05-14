//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   string binary = "";
   while(n) {
      binary += (n % 2 + '0'); // int to char;
      n /= 2;
   }
   //reverse(binary.begin(), binary.end());
   int cnt = count(binary.begin(), binary.end(), '1');
   //cout << cnt << "\n";
   if(cnt % 2) cout <<"ODD\n";
   else cout << "EVEN\n";
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