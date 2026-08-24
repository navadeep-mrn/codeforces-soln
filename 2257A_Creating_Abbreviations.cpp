#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
 
#define int long long
const ll MOD = 1e9 + 7;
 
void solve(){
    int n,m;
    cin>>n>>m;
 
    vector<bool> available(26);
 
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        available[s[0]-'a']=true;
    }
 
    bool ok=true;
 
    for(int i=0;i<m;i++){
        string abbreviation;
        cin>>abbreviation;
 
        for(auto c:abbreviation){
            if(!available[c-'A']){
                ok=false;
            }
        }
    }
 
    cout<<(ok?"YES":"NO")<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--) solve();
}