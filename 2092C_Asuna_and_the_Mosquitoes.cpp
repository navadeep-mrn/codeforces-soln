#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    ll n; cin>>n;
    ll s=0,k=0,mx=0;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        s+=x;
        mx=max(mx,x);
        if(x&1) k++;
    }
    if(k==0 || k==n)
        cout<<mx<<"\n";
    else
        cout<<s-k+1<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}