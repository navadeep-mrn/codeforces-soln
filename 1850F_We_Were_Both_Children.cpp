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
    sort(all(v));
    vector<int> dp(n+1);
    int m=0;
    for(int i:v){
       if(i<=n) dp[i]++;
    }
    vector<int> f(n+1);
    for(int i=0;i<n+1;i++){
        if(dp[i]==0)continue;
        else{
            for(int j=i;j<=n;j=j+i){
                f[j]+=dp[i];
                m=max(m,f[j]);
            }
        }
    }
    cout<<m<<endl;
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}