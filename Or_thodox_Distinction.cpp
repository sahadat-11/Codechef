//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   ll n; cin >> n;
   vector<ll> v(n);
   for(ll i = 0; i < n; i++) cin >> v[i];
   if(n > 62) {
   	 cout << "NO\n"; return;
   }
   set<ll> st;
   bool flag = true;
   for(ll i = 0; i < n; i++) {
   	 ll OR = 0;
   	 for(ll j = i; j < n; j++) {
       OR |= v[j];
       if(st.find(OR) != st.end()) {
       	 flag = false; break;
       }
       else {
       	 st.insert(OR);
       }
       //cout << OR << endl;
   	 }
   } 
   if(flag) {
   	cout << "YES\n";
   }
   else {
   	cout << "NO\n";
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

// 

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   bool flag = true;
   set<int> st;
   for(int i = 0; i < n; i++) {
    int x = 0;
    for(int j = i; j < n; j++) {
     x = (x | v[j]);
     if(st.find(x) != st.end()) {
      flag = false; break;
     }
     st.insert(x);
    }
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
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

// https://prnt.sc/Z4eGjMqWVLtx