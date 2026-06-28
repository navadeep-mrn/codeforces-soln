#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    ll a,b,n;cin>>a>>b>>n;
    if(b>=a || 1LL*n*b<=a)
        cout<<1<<"\n";
    else
        cout<<2<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}