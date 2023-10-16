//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n + 1], b[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
      int cnt = 0;
      for(int j = i + 1; j <= n; j++) {
        if(a[i] < a[j]) cnt++;
      }
      cout << cnt << " ";
    }
    cout << "\n";
  }
  
  return 0;
}