//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
bitset<N> f;
vector<int> prime;
void solve() {
   int n; cin >> n;
   vector<int> ans;
   for(int i = 0; i < n / 2; i++) {
   	ans.push_back(prime[i]);
   	ans.push_back(prime[i]);
   }
   if(n % 2) ans.push_back(1);
   for(int i = 0; i < (int)ans.size(); i++) {
   	cout << ans[i] << " ";
   }
   cout << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  f[0] = f[1] = true; 
  for(int i = 4; i <= N; i += 2) f[i] = true;
  for(int i = 3; i * i <= N; i += 2) {
    if(!f[i]) {
    for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
   } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
  }
  for(int i = 2; i <= N; i++) {
    if(!f[i]) prime.push_back(i);
  }
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}