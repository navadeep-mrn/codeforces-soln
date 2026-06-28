#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
void solve(){
    ll n;cin>>n;
    ll s=0;
    for(ll i=1;i<=n;i++){
        ll m=n/i;
        s+=m*m;
    }
    cout<<s<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
}