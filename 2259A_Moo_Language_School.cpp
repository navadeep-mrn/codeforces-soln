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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int ok=0,c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')ok=1;
        if((i+1)%k==0){
            if(ok==0){
                c++;
        }
            ok=0;
        }
    }
    cout<<c<<endl;
}
 
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}