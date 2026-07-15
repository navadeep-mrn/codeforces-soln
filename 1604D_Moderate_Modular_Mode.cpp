#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    ll x,y;cin>>x>>y;
    ll a,r;
    if(x==y)    {
        cout<<x<<"\n";
        return;
    }
    if(x>y){
        cout<<x+y<<endl;return;
    }
    if(x<y){
        if(y%x==0) cout<<x<<"\n";
        else cout<<y-(y%x)/2<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}