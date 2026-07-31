#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
#define int long long
 
 
void solve(){
    int n,k,s;cin>>n>>k>>s;
    int mas=(n*(n+1))/2;
    int mis=(k*(k+1))/2;
    int p=((n-k)*(n-k+1))/2;
    mas=mas-p;
    if(s>=mis&&s<=mas)  yes();
    else no();  
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
    while(t--)solve();
}