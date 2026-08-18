#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
void solve(){
    int k,n,w;
    cin>>k>>n>>w;
 
    int cost=k*w*(w+1)/2;
 
    cout<<max(0LL,cost-n)<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
}