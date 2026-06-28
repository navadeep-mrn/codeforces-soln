#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
 
void solve(){
    int n;
    ll c,k;
    cin>>n>>c>>k;
 
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    sort(all(a));
 
    for(int i=0;i<n;i++){
        if(a[i]>c) break;
 
        ll use=min(k,c-a[i]);
        k-=use;
 
        c+=a[i]+use;
    }
 
    cout<<c<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
}