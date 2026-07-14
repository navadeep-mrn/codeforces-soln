#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n,m;cin>>n>>m;
    if(n==1){
        yes();
        return;
    }
    if(m>=n){
        no();
        return;
    }
    int d=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            d=i;break;
        }
    }
    
    if(d<=m) no();
    else yes();
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}