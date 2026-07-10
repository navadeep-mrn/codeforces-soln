#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    sort(rall(v));
    ll f=0;
    for(ll i=0;i<n;i++){
        f+=v[i]*k;
        if(k>0) k--;
    }
    cout<<f<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}