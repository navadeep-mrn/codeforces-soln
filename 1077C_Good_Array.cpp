#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int n;cin>>n;
    vector<ll> v(n);
    map<ll,vector<int>>m;
    ll s=0,ts;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
        m[v[i]].push_back(i+1);
    }
    ts=s;
    vector<int> f;
    sort(all(v));
    if(n>2&&m[v[n-1]].size()==1){
        ts=ts-v[n-1]-v[n-2];
        if(ts==v[n-2]){
            for(int i:m[v[n-1]]){   
                f.push_back(i);
            }
        }
    }
    ll uk=s-v[n-1];
    ll x=uk-v[n-1];
    if(m.count(x)){
        if(x==v[n-1]&&m[v[n-1]].size()==1){
        }
        else{
        //cout<<x<<endl;
        for(int i:m[x]){
           // cout<<i<<endl;
            f.push_back(i);
        }}
    }
    if(f.size()==0){
        cout<<0<<endl;
    }
    else{
        cout<<f.size()<<endl;
        for(int i:f){
            cout<<i<<" ";
        }
    }
    
 
 
    
}