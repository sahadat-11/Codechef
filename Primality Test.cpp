//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    ll n; cin >> n;
    vector<ll> primes_facts;
    for(ll i = 2; i * i <= n; i++) {
      if(n % i == 0) {
        while(n % i == 0) {
          primes_facts.push_back(i);
          n /= i;
        }
      }
    }
    if(n > 1) primes_facts.push_back(n);
    for(auto u : primes_facts) cout << u << " ";
    return 0;
}