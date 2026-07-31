#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
#define int long long
 
 
void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    bool ok=false;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==k)ok=true;
    }
    if(ok)yes();
    else    no();
    
    
 
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
    while(t--)solve();
}