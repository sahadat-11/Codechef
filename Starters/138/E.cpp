//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
bitset<N>f;
vector<int> prime;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  f[0] = f[1] = true; 
  for(int i = 4; i <= N; i += 2) f[i] = true;
  for(int i = 3; i * i <= N; i += 2) {
    if(!f[i]) {
    for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
   } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
  }
  
  vector<int> prime;
  for(int i = 2; i <= N; i++) {
    if(!f[i]) prime.push_back(i);
  }
  
  cin >> t;
  while(t--) {
    int n; cin >> n;
    int x = prime.size();
    bool flag = false;
    n -= 4;
    for(int i = 0; i < x; i++) {
      if(n < 0) break;
      int cc = n - prime[i] * prime[i];
      if(cc < 0) break;
      int c = sqrtl(cc);
      if(c < 0) break;
      if(c * c == cc and !f[c] and c != prime[i]) {
        flag = true; break;
      }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
bitset<N>f;
vector<int> prime;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  f[0] = f[1] = true; 
  for(int i = 4; i <= N; i += 2) f[i] = true;
  for(int i = 3; i * i <= N; i += 2) {
    if(!f[i]) {
    for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
   } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
  }
  
  vector<int> prime;
  for(int i = 2; i <= N; i++) {
    if(!f[i]) prime.push_back(i * i);
  }
  
  cin >> t;
  while(t--) {
    int n; cin >> n;
    int x = prime.size();
    bool flag = false;
    if(n < 38) {
      cout << "NO\n"; continue;
    }
    n -= 4;
    for(int i = 0; i < x; i++) {
      int cc = n - prime[i];
      if(cc < 0) break;
      int c = sqrtl(cc);
      if(c < 0) break;
      if(c * c == cc and !f[c]) {
        flag = true; break;
      }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}

// https://prnt.sc/0gnijKnN1AFI