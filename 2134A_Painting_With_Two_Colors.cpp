#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    if((n-b)&1) cout<<"NO\n";
    else if(a<=b) cout<<"YES\n";
    else if(((n-a)&1)==0) cout<<"YES\n";
    else cout<<"NO\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
}