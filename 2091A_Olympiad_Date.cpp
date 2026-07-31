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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int> m;
    m[0]=3,m[1]=1,m[2]=2,m[3]=1,m[5]=1;
    int z=0;
    for(int i=0;i<n;i++){
        if(m.count(v[i])){
            if(m[v[i]]==1) m.erase(v[i]);
            else m[v[i]]--;
        }
        if(m.empty()){
            z=i+1;
            break;
        }
    }
    cout<<z<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
    while(t--)solve();
}