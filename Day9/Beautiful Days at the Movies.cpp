#include <iostream>
  
using namespace std;

bool chk(int x, int mod) {
    int n = x;
    int m = 0;
    while (x > 0) {
        m = m * 10 + x % 10;
        x /= 10;
    }
    int d = abs(n - m);
    d %= mod;
    return (d == 0);
}

int main() {
    int l, r, k;
    cin >> l >> r >> k;
    int ans = 0;
    for (int i = l; i <= r; i++) {
        if (chk(i, k)) {
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}
