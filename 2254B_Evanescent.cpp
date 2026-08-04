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
    vector<pair<int,char>> v;
    char pr;
    bool x=false,x1=false;
    for(int i=1;i<n-1;i++){
        if(s[i-1]!=s[i]&&s[i]!=s[i+1]&&s[i+1]==s[i-1]){
            x=true;
        }
        if(s[i-1]!=s[i]&&s[i]!=s[i+1]){
            x1=true;
        }
    }
    int s1 = 1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            s1++;
        }
    }
    if(x){
        cout<<s1-2<<endl;
    }
    else if(x1){
        cout<<s1-1<<endl;
    }
    else{
        cout<<s1<<endl;
    }
}
    
    
    
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
 
    while(t--)solve();
}