//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int x, y, X, Y; cin >> x >> y;
   while(x) {
   	 if(x > y) swap(x, y);
   	 else {
   	 	Y = x;
   	 	X = y % x;
   	 	x = X, y = Y;
   	 }
   	 //cout << x << " " << y << "\n";
   }
   cout << y << "\n";
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