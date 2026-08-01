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
    int n,m;cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    vector<int> a(m);
    for(int i=0;i<m;i++)    cin>>a[i];
    sort(all(a));
    if(n<2*m){
        no();return;
    }
    bool ok=true;
    for(int i=0;i<m;i++){
        if(!(v[i]<a[i]&&a[i]<v[n-m+i]))   {ok=false;break;}
    }
    if(ok)yes();
    else no();
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
    while(t--)solve();
}