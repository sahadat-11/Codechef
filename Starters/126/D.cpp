// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n; cin >> n;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) cin >> v[i];
//    int cnt = 0;
//    for(int i = 0; i < n; i++) {
//    	for(int j = i + 1; j < n; j++) {
//    	  int a = v[j] - v[i];
//    	  int b = v[j] + v[i];
//    	  int c = v[i] * v[j];
//    	  if(c == 3 * a and b == 2 * a) cnt++;
//    	}
//    }
//    cout << cnt << "\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }
// // O(N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, int> mp;
   int cnt = 0;
   for(int i = 0; i < n; i++) {
     if(v[i] > 1) {
     	int x = 3 * v[i];
     	if(x % (v[i] - 1) == 0) {
     		int z = x / (v[i] - 1);
     		if(mp.find(z) != mp.end()) {
     		  cnt += mp[z];
     		}
     	}
     }
     mp[v[i]]++;
   }
   cout << cnt << "\n";
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