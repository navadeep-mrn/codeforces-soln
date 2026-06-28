#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){ cout<<"YES"<<"\n"; }
void no(){ cout<<"NO"<<"\n"; }
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define mod 998244353
 
vector<ll> pw(100005);
 
void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];
    int ma=-1,ia=0,mb=-1,ib=0;
    for(int i=0;i<n;i++){
        ma=max(ma,a[i]);
        if(a[i]==ma)    ia=i;
        mb=max(mb,b[i]);
        if(b[i]==mb)    ib=i;
        int r=0,mx=0;
        if(ma>mb){
            mx=ma;
            r=b[i-ia];
        }
        else if(ma<mb){
            mx=mb;
            r=a[i-ib];
        }
        else{
            mx=ma;
            r=max(a[i-ib],b[i-ia]);
        }
        cout<<(pw[mx]+pw[r])%mod<<" ";
    }
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    pw[0]=1;
    for(int i=1;i<100005;i++){ 
        pw[i]=pw[i-1]*2%mod;
    }
 
 
    while(t--)solve();
}