#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n,k,m;cin>>n>>k>>m;
    if(k>m){
        no();
        return;
    }
    bool d=true;
    int x=m/k;
    yes();
    cout<<m-k+1<<" ";
    for(int i=1;i<n;i++){
        cout<<1<<" ";
    }
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}