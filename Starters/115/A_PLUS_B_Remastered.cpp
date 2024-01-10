//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
void solve() {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n);
  for(int i = 0; i < n; i++) {
  	cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
  	cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.rbegin(), b.rend());
  for(int i = 0; i < n; i++) {
  	c[i] = a[i] + b[i];
  }
  bool flag = true;
  for(int i = 0; i < n - 1; i++) {
  	if(c[i] != c[i + 1]) flag = false;
  }
  if(flag) {
  	for(int i = 0; i < n; i++) cout << a[i] << " "; cout << "\n";
  	for(int i = 0; i < n; i++) cout << b[i] << " "; cout << "\n";	
  }
  else {
  	cout << "-1\n";
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