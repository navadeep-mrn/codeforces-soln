#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;cin>>n;
    ll f=0;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        f=__gcd(f,x);
    }
    ll c=0;
    for(ll i=1;i*i<=f;i++){
        if(f%i==0){
            if(i*i==f)  c++;
            else c+=2;
        }
    }
    cout<<c<<endl;
 
}