#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    ll s=0;
    sort(all(v));
    for(int i=1;i<n+1;i++){
        v[i]+=v[i-1];
    }
    for(int i=1;i<=n;i++){
        if(k-v[i]<0){
            v[i]=0;
        }
        else{
            v[i]=(k-v[i])/i+1;
        }
        s+=v[i];
    }
    cout<<s<<"\n";
    
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}