#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll maxi=0,two=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        maxi=max(maxi,v[i]);
        if(v[i]==2) two++;
    }
    if(maxi>2 || two>1) yes();
    else no();
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}