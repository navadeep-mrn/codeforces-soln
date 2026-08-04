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
    string a,b;cin>>a>>b;
    int x1=0,x2=0;
    int fa1=0,fa2=0,fb1=0,fb2=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1') {x1++;
            if(i%2==0)fa2++;
            else fa1++;
        }
        if(b[i]=='1'){x2++;
            if(i%2==0)fb2++;
            else fb1++;
        }
    }
    if(x1!=x2){
        no();
        return;
    }
    if(fa1==fb1&&fa2==fb2){
        yes();
    }
    else{
        no();
    }
 
}
    
    
    
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
 
    while(t--)solve();
}