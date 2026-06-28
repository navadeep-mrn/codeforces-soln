#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    ll n;cin>>n;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    ll mn=0,mx=0;
    for(int i=0;i<n;i++){
        ll nmn=min({mn-a[i],mx-a[i],b[i]-mx,b[i]-mn});
        ll nmx=max({mn-a[i],mx-a[i],b[i]-mx,b[i]-mn});
        mn=nmn;
        mx=nmx;
    }
    cout<<mx<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}