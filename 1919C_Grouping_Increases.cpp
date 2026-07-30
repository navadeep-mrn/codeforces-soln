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
    int a=0;
    int x=INT_MAX,y=INT_MAX;
    for(int i=0;i<n;i++){
        if(x>y)swap(x,y);
        if(v[i]<=x)x=v[i];
        else if(v[i]<=y)y=v[i];
        else{
            x=v[i];
            a++;
        }
    }
    cout<<a<<endl;
 
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
    while(t--)solve();
}