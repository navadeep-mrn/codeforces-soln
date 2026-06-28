#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    sort(all(a));
    vector<pair<ll,ll>> v;
    for(auto x:a){
        if(v.empty() || v.back().first!=x) v.push_back({x,1});
        else v.back().second++;
    }
    while(1){
        int m=v.size();
        if(v[m-1].second%2==0){
            yes(); 
            return; 
        }
        if(m==1){ 
            no(); 
            return;
        }
        if(v[m-1].first-v[m-2].first<=k){ 
            yes();
            return;
         }
        v.pop_back();
}
 
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}