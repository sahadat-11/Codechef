// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void sol(int x) {
// 	for(int a = 0; a <= x; a++) {
// 		for(int b = a; b <= x; b++) {
// 		  if((a & b) + (a | b) == x) {
// 		  	cout << a << " " << b << " ";
// 		  }
// 		}
// 	}
// 	cout << "\n";
// }
// void solve() {
//    for(int x = 1; x <= 20; x++) {
//    	 cout << x << ": ";
//    	 sol(x);
//    }
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

// we observe that (0 & n) = 0 and (0 | n) = n;
// ((0 & n) + (0 | n)) = n;
// so ans = 0 and n;


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   ll x; cin >> x;
   cout << 0 << " " << x << "\n";
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

