//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
     int p, q, r; cin >> p >> q >> r; int a[p], b[q], c[r];
     for(int i = 0; i < p; i++) cin >> a[i];
     for(int i = 0; i < q; i++) cin >> b[i];
     for(int i = 0; i < r; i++) cin >> c[i];
     sort(a, a + p);
     sort(b, b + q);
     sort(c, c + r);
     ll i = 0, k = 0, s1 = 0, s2 = 0, sum = 0;
     for(int j = 0; j < q; j++) {
        //int x = 0, z = 0;
        while(i < p and a[i] <= b[j]) {
           s1 = (s1 + a[i]) % mod;
           i++;
        }
        while(k < r and c[k] <= b[j]) {
           s2 = (s2 + c[k]) % mod;
           k++;
        }
        ll x = (s1 + i * b[j]) % mod;
        ll z = (s2 + k * b[j]) % mod;
        sum = (sum + (x * z)) % mod;
     }
     cout << sum << "\n";
  }
  return 0;
}