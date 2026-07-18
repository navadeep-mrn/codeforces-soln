#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
void yes(){ cout<<"YES\n"; }
void no(){ cout<<"NO\n"; }
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int mn = 1e9;
    ll ans = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mn = min(mn, a[i]);
        ans += mn;
    }
    cout<<ans<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
}