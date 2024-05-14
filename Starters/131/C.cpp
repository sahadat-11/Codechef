//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
    cin >> v[i];
   }
   sort(v.begin(), v.end());
   int ans = 0;
   for(int i = 0; i < n; i++) {
     if(v[i] == 1 or ans == 0 or ans == 1) {
     	ans = (ans + v[i]) % mod;
     }
     else {
     	ans = (ans * v[i]) % mod;
     }
   }
   cout << ans << "\n";
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


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
ll mul(ll a, ll b){
    return ((a%mod) * (b%mod));
}
ll add(ll a, ll b){
    return ((a%mod) + (b%mod));
}
int main() {
	// your code goes here
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> A(n);
        ll ans = 0;
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        sort(A.begin(),A.end());
        for(int i = 0; i < n; i++){
            ans = max(mul(ans , A[i]), add(ans , A[i]))%mod;
        }
        cout << ans % mod<< endl;
    }
}