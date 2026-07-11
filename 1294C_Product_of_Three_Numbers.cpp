#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
 
ll mod=998244353;
 
void solve(){
    int n;
    cin>>n;
    int a=-1,b=-1,c=-1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=i;
            n/=i;
            break;
        }
    }
    if(a==-1){
        no();
        return;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0 && i!=a){
            b=i;
            n/=i;
            break;
        }
    }
    c=n;
    if(b==-1 || c==1 || c==a || c==b){
        no();
        return;
    }
    yes();
    cout<<a<<" "<<b<<" "<<c<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--) solve();
}