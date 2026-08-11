#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
const int mod=998244353;
const int N=1e6;
 
// fact[i] = i! % mod
// ifact[i] = (i!)^-1 % mod
ll fact[N+1],ifact[N+1];
 
// a^b % mod
ll power(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1)
            res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
 
// Precompute factorials and inverse factorials
void init(){
    // fact[i] = i!
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=fact[i-1]*i%mod;
    }
    // By Fermat's Little Theorem:
    // a^(mod-2) = a^(-1) (mod mod)
    //
    // So:
    // ifact[N] = (N!)^(-1)
    ifact[N]=power(fact[N],mod-2);
    // ifact[i-1] = (i-1)!^(-1)
    //
    // Since:
    // i! = i * (i-1)!
    //
    // Therefore:
    // (i-1)!^(-1) = i * (i!)^(-1)
    for(int i=N;i>=1;i--){
        ifact[i-1]=ifact[i]*i%mod;
    }
}
 
 
// Calculate nCr % mod
//
// nCr = n! / (r! * (n-r)!)
//
// Division under modulo becomes multiplication
// by modular inverse.
//
// nCr = fact[n] * ifact[r] * ifact[n-r]
ll nCr(int n,int r){
    if(r<0 || r>n)
        return 0;
    return fact[n]*ifact[r]%mod*ifact[n-r]%mod;
}
 
 
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int c0=0,c1=0;
    int s0=0,s1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c0++;
        }
        else{
            c1++;
        }
        if(i==0||s[i]!=s[i-1]){
            if(s[i]=='0')
                s0++;
            else
                s1++;
        }
    }
    int a=1;
    if(s0>0){
        a=a*nCr(c0-1,s0-1)%mod;
    }
    if(s1>0){
        a=a*nCr(c1-1,s1-1)%mod;
    }
    cout<<a<<endl;
}
    
    
    
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    init();
    int t;
    cin>>t;
 
    while(t--)solve();
}