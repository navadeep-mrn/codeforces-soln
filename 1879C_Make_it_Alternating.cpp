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
    string s;cin>>s;
    vector<int> v;
    int c=1;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            v.push_back(c);
            c=0;
        }
        c++;
    }
    v.push_back(c);
    int mu=1;
    int z=0;
    for(int i:v){
        if(i>1) {
            mu=((1ll)*(i)*mu)%mod;
            z+=i-1;
        }
    }
    int n=s.size(),k=v.size();
    for(int i=1;i<=n-k;i++){
        mu=((1ll)*(i)*mu)%mod;
    }
    cout<<z<<" "<<mu<<endl;
}
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}