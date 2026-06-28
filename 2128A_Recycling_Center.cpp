#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    ll c;
    cin>>n>>c;
 
    vector<int> d;
 
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
 
        if(a>c) continue;
 
        int cur=-1;
        while(a<=c){
            cur++;
            a*=2;
        }
 
        d.push_back(cur);
    }
 
    sort(d.begin(),d.end());
 
    int tm=0,freebags=0;
 
    for(int x:d){
        if(x>=tm){
            freebags++;
            tm++;
        }
    }
 
    cout<<n-freebags<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
}