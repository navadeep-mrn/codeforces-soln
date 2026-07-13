#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n;cin>>n;
    vector<pair<ll,ll>> v(n);
    
    for(int i=0;i<n;i++){
        int x;cin>>x;
        ll m=0;
        for(ll j=0;j<x;j++){
            ll kmk;cin>>kmk;
            m=max(m,kmk-j+1);
        }
        v[i].first=m;v[i].second=x;
        //cout<<m<<endl<<x<<endl;
    }
    sort(all(v));
    ll a=v[0].first,b=a;
    for(auto& [i,j]:v){
        if(b<i){
            a+=i-b;
            b=i;
        }
        b+=j;
    }
    cout<<a<<endl;
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}