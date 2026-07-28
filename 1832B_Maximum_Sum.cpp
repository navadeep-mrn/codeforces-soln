#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
#define int long long
 
vector<int> v(1000001);
 
void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    vector<int> pref(n+1);
    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+v[i];
    }
    int c=0;
    for(int i=0;i<=k;i++){
        int x=2*i;
        int y=n-(k-i);
        c=max(c,pref[y]-pref[x]);
    }
    cout<<c<<endl;
}
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   
 
 
    int t;
    cin>>t;
    while(t--)solve();
}