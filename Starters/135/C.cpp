// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7, mod = 1e9 + 7;
// #define int long long
// int dp[N];
// int a, b, x; 

// int func(int i) {
//   if(i == a) return 0;
//   if(dp[i] != -1) return dp[i];
//   int ans = func(i - 1) + 1;
//   if(i % x == 0) ans = min(ans, func(i / x) + 1);
//   dp[i] = ans;
//   return dp[i];
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t; cin >> t;
//   while(t--) {
//    memset(dp, -1, sizeof dp);
//    cin >> a >> b >> x;
//    cout << func(b);
//   }
//   return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, x; cin >> a >> b >> x;
   int cnt1 = 0;
   int aa = a, bb = b, xx = x;
   while(a * x <= b) {	 
   	 a *= x;
   	 cnt1++;
   }
   cnt1 += (b - a);
   //cout << cnt1 << " ";
   int cnt2 = min(bb % aa, aa - bb % aa);
   aa += cnt2;
   //cout << aa << " " << cnt2 << "\n";
   while(aa * xx <= bb) {	 
   	 aa *= xx;
   	 cnt2++;
   }
   cnt2 += (bb - aa);
   cout << min(cnt1, cnt2) << "\n";
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