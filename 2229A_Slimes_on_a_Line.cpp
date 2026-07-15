#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    ll n;cin>>n;
    vector<ll>v(n);
    ll s=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
    }
    sort(all(v));
    //cout<<s<<endl;
    cout<<(v[n-1]-v[0]+1)/2<<endl;
    
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}