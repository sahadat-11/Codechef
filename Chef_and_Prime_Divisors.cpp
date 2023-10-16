//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   int t; cin >> t;
   while(t--) {
   ll a, b; cin >> a >> b;
   
   ll g = __gcd(a, b);
   while(g > 1) {
      b /= g;
      g = __gcd(a, b);
   }
   if(b == 1) cout << "Yes\n";
   else cout << "No\n";
 }
   return 0;
}
// https://prnt.sc/EAEpYSwHnnKH 

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   int t; cin >> t;
   while(t--) {
   ll a, b; cin >> a >> b;
   while(1) {
      g = __gcd(a, b);
      if(g == 1) break;
      b /= g;
   }
   if(b == 1) cout << "Yes\n";
   else cout << "No\n";
 }
   return 0;
}