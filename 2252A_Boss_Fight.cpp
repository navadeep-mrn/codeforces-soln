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
    map<int,int> m;
    int maxi=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        m[x]++;
        maxi=max(maxi,m[x]);
    }
    vector<pair<int,int>> v(m.begin(),m.end());
    int tt=0;
    for(int i=1;i<=maxi;i++){
        int s=0,c=0,l=0;
        for(auto& [x,y]:v){
            int up=min(y,i);
            s+=x*up;
            c+=up;
            if(y>i) l=max(l,x);
        }
        if(c>=2*i-1)    tt=max(tt,s+l);
    }
    cout<<tt<<endl;
 
}
    
    
    
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
 
    while(t--)solve();
}