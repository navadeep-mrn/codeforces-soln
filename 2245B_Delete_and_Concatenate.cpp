#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
    }
    if(n==1){
        cout<<(1LL)*v[0]-k<<endl;
        return;
    }
    vector<int> d;
    for(int i=0;i<n;i++){
        ll ch=k-v[i];
        if(ch>0)d.push_back(ch);
    }
    sort(rall(d));
    ll f=0;
    for(int i=0;i<n/2&&i<d.size();i++){
        f+=d[i];
    }
    ll y=s-(1LL)*n*k+f;
    cout<<y<<endl;
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}