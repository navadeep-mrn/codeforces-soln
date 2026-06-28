#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
ll mod=998244353;
 
ll longpow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
 
void solve(){
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll r=m*(a-1)+(n-a+1)*(b-1);
    cout<<longpow(2,r)<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
}