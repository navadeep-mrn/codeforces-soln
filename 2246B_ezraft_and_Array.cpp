#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n;cin>>n;
    ll c=6;
    ll ts=6;
    if(n==1){
        cout<<2<<endl;return;
    }
    if(n==2){
        cout<<-1<<endl;return;
    }
    cout<<2<<" "<<4<<" ";
    for(int i=2;i<n;i++){
        c=ts;
        cout<<c<<" ";
        ts+=c;
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