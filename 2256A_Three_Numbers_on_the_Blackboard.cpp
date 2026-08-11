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
    int n=3;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    sort(all(v));
    if(v[2]>v[1]+v[0]){
        cout<<v[1]<<endl;
    }
    else{
        cout<<abs(v[2]-v[0])<<endl;
    }
 
}
    
    
    
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
 
    while(t--)solve();
}