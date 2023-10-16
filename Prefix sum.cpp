//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
ll pre[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	int n; cin >> n; int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
  	   pre[i] = pre[i - 1] + a[i];
    }
    int q; cin >> q;
    while(q--) {
 	int l, r; cin >> l >> r;
    cout << pre[r] - pre[l - 1] << "\n";
    }
    for(int i = 0; i <= n; i++) pre[i] = 0;
  }
  return 0;
}