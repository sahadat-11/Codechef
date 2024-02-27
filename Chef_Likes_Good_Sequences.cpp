//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, q; cin >> n >> q;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) cin >> v[i];
   ll ans = 1;
   for(int i = 1; i < n; i++) {
   	 if(v[i] != v[i + 1]) ans++;
   }
   //cout << ans << endl;
   while(q--) {
   	 int x, y; cin >> x >> y;
   	 int get = 0;
   	 if(x > 1 and v[x] == v[x - 1]) get++;
   	 if(x < n and v[x] == v[x + 1]) get++;
   	 v[x] = y;
   	 if(x > 1 and v[x] == v[x - 1]) get--;
   	 if(x < n and v[x] == v[x + 1]) get--;
   	 //cout << get << endl;
   	 ans += get;
   	 cout << ans << "\n";
   }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}