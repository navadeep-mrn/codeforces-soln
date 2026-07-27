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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)    cin>>b[i];
    vector<pair<int,int>> df(n);
    for(int i=0;i<n;i++){
        df[i].first=a[i]-b[i];
        df[i].second=i+1;
    }
    sort(rall(df));
    int prev=df[0].first;
    vector<int> f;
    for(int i=0;i<n;i++){
        if(df[i].first!=prev)   break;
        f.push_back(df[i].second);
    }
    cout<<f.size()<<endl;
    reverse(all(f));
    for(int i:f){
        cout<<i<<" ";
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