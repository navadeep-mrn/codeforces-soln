#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    ll n,k;cin>>n>>k;
    ll a=n,b=1;
    k--;
    if(n%2==0){
        cout<<(k%n)+1<<endl;
        return;
    }
    int v=n/2;
    cout<<((k+(k/v))%n)+1<<"\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}