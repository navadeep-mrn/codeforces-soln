#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    ll a,b,x;cin>>a>>b>>x;
    vector<pair<ll,ll>> u,v;
    ll c=a,s=0;
    while(true){
        u.push_back({c,s});
        if(c==0)    break;
        c=c/x;
        s++;
    }
    c=b,s=0;
    while(true){
        v.push_back({c,s});
        if(c==0)    break;
        c=c/x;
        s++;
    }
    ll ans=LLONG_MAX;
    for(auto& [ui,uj]:u){
        for(auto& [vi,vj]:v){
            ans=min(ans,uj+vj+abs(ui-vi));
        }
    }
    cout<<ans<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}