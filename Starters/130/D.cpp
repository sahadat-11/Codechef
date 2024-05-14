//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n; string s; cin >> s;
   vector<int> ans;
   char pre = '3';
   for(int i = 1; i < n; i += 2) {
   	if(s[i] != s[i - 1]) {
   	  if(s[i] != pre) {
        ans.push_back(i + 1);
        pre = s[i];
   	  }
   	  else if(s[i - 1] != pre){
        ans.push_back(i);
        pre = s[i - 1];
   	  }
   	}
   }
   cout << (int)ans.size() << "\n";
   for(auto u : ans) cout << u << " "; cout << "\n";
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