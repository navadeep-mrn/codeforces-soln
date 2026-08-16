#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    vector<int> p1(n+1),p2(n+1);
    for(int i=0;i<n;i++){
        p1[i+1]=p1[i]+(a[i]==1?1:-1);
        p2[i+1]=p2[i]+(a[i]==3?-1:1);
    }
    int mn=1e9;
    for(int i=1;i<n;i++){
        if(p2[i]-mn>=0){
            cout<<"YES\n";
            return;
        }
 
        if(p1[i]>=0)
            mn=min(mn,p2[i]);
    }
    cout<<"NO\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin>>t;
    while(t--)
        solve();
}