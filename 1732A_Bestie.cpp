#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
const ll MOD = 1e9 + 7;
 
int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    int x=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        x=__gcd(x,v[i]);
    }
    int g=x;
    if(g==1){
        cout<<0<<endl;
        return;
    }
    if(gcd(g,n)==1){
        cout<<1<<endl;
        return;
    }
    if(gcd(g,n-1)==1){
        cout<<2<<endl;
        return;
    }
 
    cout<<3<<endl;
}
 
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}