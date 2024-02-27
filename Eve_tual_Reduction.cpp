//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; string s; cin >> n >> s;
   map<char, int> mp;
   for(auto u : s) mp[u]++;
   for(auto u : mp) {
   	 if(u.second % 2) {
   	 	cout << "NO\n";
   	 	return;
   	 }
   }
   cout << "YES\n";
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