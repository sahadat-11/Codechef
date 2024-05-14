//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int one = 0, odd = 0;
   for(int i = 0; i < n; i++) {
   	if(v[i] == 1) one++;
   	else if(v[i] % 2) odd++;
   }
   int alice = (one + 1) / 2;
   int bob = one / 2;
   if(one % 2) {
   	if(odd % 2) bob += (n - one);
   	else alice += (n - one);
   }
   else {
   	if(odd % 2) alice += (n - one);
   	else bob += (n - one);
   }
   if(alice > bob) cout << "Alice\n";
   else if(bob > alice) cout << "Bob\n";
   else cout << " Draw\n";
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