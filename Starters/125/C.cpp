//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; string s; cin >> n >> k >> s;
   int one = count(s.begin(), s.end(), '1');
   if(one > k) {
   	for(int i = 0; i < n; i++) {
   		if(s[i] == '1' and k > 0) {
   			k--;
   			s[i] = '0';
   		}
   	}
   	cout << s;
   }
   else {
   	for(int i = 0; i < n - k; i++) cout << 0;
   }
   cout << "\n";
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