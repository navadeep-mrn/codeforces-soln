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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> p(n,-1);
    int pr=-1;
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1])    pr=i-1;
        p[i]=pr;
    }
    int q=0;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        if(p[r-1]>=l-1){
            cout<<r<<" "<<p[r-1]+1<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
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