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
    vector<int> v(n);
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]=v[i]-i;
        m[v[i]]++;
    }
    ll s=0;
    for(const auto& [i,j]:m){
        if(j!=1){
            s+=(1LL*(j-1)*j)/2;
        }
    }
    cout<<s<<endl;
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}