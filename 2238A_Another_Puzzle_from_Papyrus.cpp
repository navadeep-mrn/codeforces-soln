#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
void solve(){
    int n;ll c;cin>>n>>c;
    ll s1=0,s2=0;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1+=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        s2+=b[i];
    }
    bool k1=true;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            k1=false;
            break;
        }
    }
    ll x=LLONG_MAX;
    if(k1){
        x=min(x,s1-s2);
    }
    sort(all(a));
    sort(all(b));
    bool k2=true;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            k2=false;
            break;
        }
    }
    if(k2){
        x=min(x,c+s1-s2);
    }
    if(x==LLONG_MAX) cout<<-1<<"\n";
    else cout<<x<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
}