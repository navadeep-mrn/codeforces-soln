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
    string s;
    cin>>s;
    ll m=0,tm=0;;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            tm=0;
        }
        else{
            tm++;
            m=max(m,tm);
        }
    }
    ll k=m;
    m=k/2+k%2;
    cout<<m<<endl;
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}