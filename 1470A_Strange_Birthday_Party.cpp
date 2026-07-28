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
    sort(rall(v));
    vector<int> f(k+1);
    for(int i=1;i<=k;i++)    cin>>f[i];
    int l=0,r=1,c=0;
    while(l<n&&r<=k){
        if(f[r]<f[v[l]]){
            c+=f[r];
            r++;
        }
        else{
            c+=f[v[l]];
        }
        l++;
        //cout<<c<<" "<<l<<" "<<r<<endl;
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