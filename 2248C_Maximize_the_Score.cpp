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
    int n;cin>>n;
    vector<int> a(n+1),b(n+1),v(2*n+1);
 
    for(int i=1;i<=2*n;i++){
        int x;cin>>x;
        if(a[x]==0){
            a[x]=i;
        }
        else{
            b[x]=i;
        }
        v[i]=x;
    }
    for(int i=1;i<=n;i++){
        //cout<<a[i]<<" "<<b[i]<<endl;
    }
    vector<int> dp(2*n+1);
    map<int,int>m;
    for(int i=1;i<=n;i++){
        m[b[i]]=a[i];
        
    }
    //cout<<m.size()<<endl;
    for(auto& [i,j]:m){
        //cout<<i<<" "<<j<<endl;
    }
    for(int i=1;i<=2*n;i++){
        int k=0;
        auto it=m.find(i);
        if(it!=m.end()){
            k=dp[m[i]-1]+(i-m[i]+1)*(i-m[i]+1);
        }       
        int z=dp[i-1];
        dp[i]+=max(k,z+1);
        //cout<<dp[i]<<endl;
    }
    cout<<dp[2*n]<<endl;
    
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
    while(t--)solve();
}