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
    int n,x,y;cin>>n>>x>>y;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        mp[v[i]%y].push_back(v[i]);
    }
    ll a=0;
    for(auto it:mp){
        vector<int> v=it.second;
        map<int,int>mp1;
        for(int i=0;i<v.size();i++){
            mp1[v[i]%x]++;
        }
        for(auto it:mp1){
            if(it.first==0||(it.first==x/2&&x%2==0)){
                int c=it.second;
                a+=(c*(c-1))/2;
                it.second=0;
            }
            else{
                int c1=it.second;
                int c2=mp1[x-it.first];
                a+=c1*c2;
                mp1[x-it.first]=0;
            }
        }
        
    }
    cout<<a<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}