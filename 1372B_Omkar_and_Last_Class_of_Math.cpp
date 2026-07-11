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
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
        return;
    }
    int d=n;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            d=i;
            break;
        }
    }
    int g=n/d;
    cout<<g<<" "<<n-g<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}