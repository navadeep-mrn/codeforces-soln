#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;
        ll d = y - x;
        ll ans = 0;
        ll a = x;
        while (a <= d && k > 0) {
            ans += d % a;
            a++;
            k--;
        }
        ans += k * d;
        cout << ans << '\n';
    }
    return 0;
}