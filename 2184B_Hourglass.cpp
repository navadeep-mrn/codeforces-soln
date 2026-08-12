#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
 
 
 
void solve(){
    int a,b,c;cin>>a>>b>>c;
    if(a<=b)    cout<<max(0LL,a-c%b)<<endl;
    else{
        int x=c%(2*b);
        if(x<b)cout<<a-x<<endl;
        else cout<<2*b-x<<endl;
    }
}
 
    
    
    
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}