#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    ll n,k;cin>>n>>k;
    ll a=0,r=n,b=1;
    while(r>0){
        if(b>r) break;
        ll t1=min(k,r/b);
        a+=t1;
        r-=t1*b;
        b*=2;
    }
    cout<<a<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}