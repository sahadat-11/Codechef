//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int unsigned long long
bool isprime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
void solve() {
   int x; cin >> x;
   int a, b;
   for(int i = x; ; i++) {
    if(isprime(i)) {
        a = i; break;
    }
   }
   for(int i = a + 1; ; i++) {
    if(isprime(i)) {
        b = i; break;
    }
   }
   //cout << a << " " << b << "\n";
   cout << a * b << "\n";
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