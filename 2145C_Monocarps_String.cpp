#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
 
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int> pr(n+1);
    for(int i=0;i<n;i++){
        if(s[i]=='a') pr[i+1]=pr[i]+1;
        else pr[i+1]=pr[i]-1;
    }
    int d=pr[n];
    if(d==0){
        cout<<0<<endl;
        return;
    }
    map<int,int> mp;
    mp[0]=0;
    int ans=n;
    for(int i=1;i<=n;i++){
        int need=pr[i]-d;
        if(mp.count(need)){
            ans=min(ans,i-mp[need]);
        }
        mp[pr[i]]=i;
    }
    if(ans==n) cout<<-1<<endl;
    else cout<<ans<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}