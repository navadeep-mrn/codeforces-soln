#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x)x.begin(),x.end()
#define rall(x)x.rbegin(),x.rend()
void yes(){cout<<"YES"<<endl;}
void no(){cout<<"NO"<<endl;}
ll mod=998244353;
#define int long long
 
void solve(){
    int n;cin>>n;
    int ans=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2)ans++;
    }
    cout<<ans<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}