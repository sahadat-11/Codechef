//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> a(n), b(m);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
    for(int i = 0; i < m; i++) {
     cin >> b[i];
   }
   if(n < 4 or m < 4 or n + m < 11) {
   	cout << "-1\n"; return;
   }
   sort(a.rbegin(), a.rend());
   sort(b.rbegin(), b.rend());
   int sum = 0;
   for(int i = 0; i < 4; i++) sum += a[i];
   for(int i = 0; i < 4; i++) sum += b[i];
   int cnt = 0, i = 4, j = 4;
   while(i < n and j < m and cnt < 3) {
   	if(a[i] > b[j]) {
   	  sum += a[i];
   	  i++;
   	}
   	else {
   	  sum += b[j];
   	  j++;
   	}
   	cnt++;
   }
   while(i < n and cnt < 3) {
   	sum += a[i];
   	i++;
   	cnt++;
   }
   while(j < m and cnt < 3) {
   	sum += b[j];
   	j++;
   	cnt++;
   }
   //cout << cnt << " " << sum << "\n";
   cout << sum << "\n";
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