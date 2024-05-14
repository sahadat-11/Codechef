//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   // bool flag = false;
   // for(int i = 0; i < n; i++) {
   //  if((a[i] & 1) and !flag) {
   //    a[i]++; flag = true;
   //  } 
   // }
   // for(int i = 0; i < n; i++) {
   //  cout << a[i] << " "; 
   // }
   // cout << "\n";
   int mx = 0, cnt = 0;
   for(int i = 0; i < n; i++) {
   	if(a[i] & 1) {
   	  cnt++;
   	  mx = max(mx, cnt);
   	}
   	else cnt = 0;
   }
   int last = 0, ans = 0;
   for(int i = 0; i < n; i++) {
     if(a[i] % 2 == 0) {
       last = i + 1;
       ans += (i + 1);
     }
     else ans += last;
   }
   if(mx % 2) {
   	ans += ((mx + 1) / 2) * ((mx + 1) / 2);
   }
   else {
   	ans += ((mx + 1) / 2) * (((mx + 1) / 2) + 1);
   }
   cout << ans << "\n";
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


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(auto &i: a) cin >> i;
        vector<long long> closest_two_on_right(n, -1);
        if(a[n-1]%2 == 0) closest_two_on_right[n-1] = n-1;
        for(int i = n-2; i >= 0; i--) {
            if(a[i]%2 == 0) closest_two_on_right[i] = i;
            else closest_two_on_right[i] = closest_two_on_right[i+1];
        }
        // for(auto &i: closest_two_on_right) cout << i << " ";
        // cout << "\n";
        long long ans = 0;
        for(int i = 0; i < n; i++) {
            if(closest_two_on_right[i] != -1) ans += n-closest_two_on_right[i];
        }
        long long maximum_odd_subarray = 0, l = 0;
        for(int i = 0; i < n; i++) {
            if(a[i]%2 == 1) l++;
            else {
                maximum_odd_subarray = max(maximum_odd_subarray, l);
                l = 0;
            }
        }
        maximum_odd_subarray = max(maximum_odd_subarray, l);
        if(maximum_odd_subarray%2 == 0) {
            ans += (maximum_odd_subarray/2)*((maximum_odd_subarray/2)+1);
        }
        else {
            ans += ((maximum_odd_subarray+1)/2)*((maximum_odd_subarray+1)/2);
        }
        cout << ans << "\n";
    }
}
