//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll t; cin >> t;
   while(t--) {
      ll n, a, b, c; cin >> n >> a >> b >> c;
      vector<ll> div;
      for(ll i = 1; i * i <= n; i++) {
         if(n % i == 0) {
            div.push_back(i);
            if(i != n / i) div.push_back(n / i);
         }
      }
      ll ans = 0;
      for(auto x : div) {
         if(x <= a) {
            for(auto y : div) {
               if(y <= b) {
                   if(n % (x * y) == 0) {
                     int z = n / (x * y);
                     if(z <= c) ans++;
                   }
               }
            }
         }
      }
      cout << ans << "\n";
   }
  return 0;
 }
// x * y * z == n that means x,y,z are the divisors of n;
// https://prnt.sc/l1aAVQGS6ZLK