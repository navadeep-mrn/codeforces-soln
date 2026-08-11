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
    string s;cin>>s;
    vector<string> v={"0011","0110","1001","1100"};
    int c=0;
    for(string z:v){
        bool f=true;
        for(int i=0;i<n;i++){
            if(s[i]!='?'&&s[i]!=z[i%4]){
                f=false;break;
            }
        }
        if(f)c++;
    }
    cout<<c<<endl;
}
    
    
    
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
 
    while(t--)solve();
}