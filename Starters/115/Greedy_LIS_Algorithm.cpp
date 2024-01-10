#include <iostream>
#define ll long long
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;

    if (x == 0) {
      for (int i = 1; i <= n; i++) {
        cout << i << " ";
      }
      cout << endl;
      continue;
    }

    if (x == n || x == n - 1) {
      cout << -1 << endl;
      continue;
    }

    for (int i = n; i >= x + 2; i--) {
      cout << i << " ";
    }

    for (int i = 1; i <= x + 1; i++) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}
