#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
 
// For one operation:
// a^x=b
// Therefore, x=a^b.
// If x<=a,we can directly reach b.
// Otherwise, we use two operations.
// Let mask be a number with all bits set to 1 up to the
// highest set bit of a.
// First:
// x1 = a ^ mask
// a ^ x1 = mask
// Second:
// x2 = mask ^ b
// mask ^ x2 = b
// If b has a higher set bit than a, it is impossible to reach b.
vector<int> fact;
void solve(){
    int n;cin>>n;
    int k;cin>>k;
    if(n==k){
        cout<<0<<endl;
        return;
    }
    int m=63-__builtin_clzll(n);
    int mask=(1LL<<(m+1))-1;
    if(k>mask){
        cout<<-1<<endl;
        return;
    }
    int x=n^k;
    if(x<=n){
        cout<<1<<endl;
        cout<<x<<endl;
        return;
    }
    else{
        int x1=n^mask;
        int x2=mask^k;
        cout<<2<<endl;
        cout<<x1<<" "<<x2<<endl;
    }
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    
}