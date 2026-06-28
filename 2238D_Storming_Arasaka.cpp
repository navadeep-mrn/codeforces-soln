#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
vector<pair<ll,ll>> prime_factorize(ll n){
    vector<pair<ll,ll>> pf;
    for(ll p=2;p*p<=n;p++){
        if(n%p==0){
            ll c=0;
            while(n%p==0){
                n/=p;
                c++;
            }
            pf.push_back({p,c});
        }
    }
    if(n>1) pf.push_back({n,1});
    return pf;
}
void solve(){
    ll n;cin>>n;    
    ll s=0;
    auto pf = prime_factorize(n);
    for(auto [p,cnt] : pf){
        s+=cnt;
    }
    s+=pf.size();
    cout<<s-1<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
}