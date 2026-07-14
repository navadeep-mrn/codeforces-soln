#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n;cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    ll prev=0;
    if(n==1){
        yes();
        return;
    }
    
    for(int i=0;i<n-1;i++){
        if(v[i]<prev+1){
            no();
            return;
        }
        ll ad=v[i]-prev-1;
        v[i+1]+=ad;
        prev++;
    }
    if(v[n-1]>prev) yes();
    else no();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}