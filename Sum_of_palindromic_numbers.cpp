//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int l, r; cin >> l >> r;
   ll sum = 0;
   for(int i = l; i <= r; i++) {
   	 int x = i;
   	 string s = to_string(x);
   	 string ss = s;
   	 reverse(ss.begin(), ss.end());
   	 if(s == ss) {
   	 	sum += (stoi(s));
   	 }
   }
   cout << sum << "\n";
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