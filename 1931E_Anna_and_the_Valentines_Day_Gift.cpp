#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
#define int long long
 
int nod(int x){
    int op=0;
    while(x>0){
        op++;x=x/10;
    }
    return op;
}
int lsd(int x){
    string s=to_string(x);
    int gg=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='0'){
            gg++;
        }
        else{
            return gg;
        }
    }
    return gg;
}
 
void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    vector<pair<int,int>> d(n);
    int tt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        d[i].second=nod(v[i]);
        tt+=d[i].second;
        d[i].first=lsd(v[i]);
    }
    
    sort(rall(d));
    for(int i=0;i<n;i+=2){
        tt-=d[i].first;
    }
    if(tt>=k+1)cout<<"Sasha"<<endl;
    else    cout<<"Anna"<<endl;
 
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
    while(t--)solve();
}