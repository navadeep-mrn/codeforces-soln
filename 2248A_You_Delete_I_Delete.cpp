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
    int n=s.length();
    bool ok=true,ok1=true;
    for(int i=0;i<n;i++){
        if(s[i]=='0'&&ok){
            ok=false;continue;
        }
        else if(s[i]=='1'&&ok1){
            ok1=false;continue;
        }
        else{
            cout<<s[i];
        }
    }
    cout<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
    while(t--)solve();
}