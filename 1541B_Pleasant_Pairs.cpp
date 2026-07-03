#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    ll n;cin>>n;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    int c=0;
    sort(all(v));
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i].first*v[j].first>2*n){
                break;
            }
            if(v[i].first*v[j].first==v[i].second+v[j].second){
                c++;
            }
        }
    }
    cout<<c<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}