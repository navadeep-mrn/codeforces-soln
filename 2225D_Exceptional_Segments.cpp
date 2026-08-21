#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
const int MOD = 998244353;
 
// Prefix XOR pattern:
// P(i) = 1 for i = 1, 5, 9, 13, ...
// P(i) = 0 for i = 0, 3, 7, 11, ...
// For a segment [l, r] containing k:
// l <= k <= r
// Let P(i) = 1 ^ 2 ^ ... ^ i.
// XOR(l...r) = 0 when P(l-1) = P(r).
// Therefore, count equal prefix XOR values between:
// left  indices [0, k-1]
// right indices [k, n].
vector<int> fact;
void solve(){
    int n,k;cin>>n>>k;
    int ca=0,cb=0,da=0,db=0;
    ca=(k-1+3)/4;
    cb=(n+3)/4-ca;
    da=(k-1+1)/4+1;
    db=(n+1)/4-k/4;
    int f=(ca%MOD)*(cb%MOD)%MOD;
    f+=(da%MOD)*(db%MOD)%MOD;
    f=f%MOD;
    cout<<f<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    
}