//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s1, s2; cin >> s1 >> s2;
      int cnt = 0;
      for(int i = 0; i < s2.size(); i++) {
         if(s1.find(s2[i]) != -1) cnt++;
      }
      cout << cnt << "\n";
   }
   return 0;
}




