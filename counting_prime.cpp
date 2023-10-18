//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e8 + 7;
bitset<N> f;
int precal[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0]=f[1]=true; 
   for(ll i = 4; i <= N; i += 2) f[i] = true;
   for(ll i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(ll j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   for(int i = 1; i <= N; i++) {
   	  precal[i] = precal[i - 1] + (!f[i]);
   }
   //for(int i = 1; i <= 10; i++) cout << precal[i] << endl;
   int t; cin >> t;
   while(t--) {
   	 int n, m; cin >> n >> m;
   	 cout << precal[m] - precal[n - 1] << endl;
   }
   return 0;
}