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
    int n;cin>>n;
    string s;cin>>s;
    int o=0;
    for(char c:s){
        if(c=='1')o++;
    }
    int a=o,l=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')l++;
        int r=(n-i-1)-(o-l);
        a=min(a,l+r);
    }
    if(s[0]=='1'){
        a=0;
        for(char c:s){
            if(c=='0')a++;
        }
    }
    cout<<a<<'\n';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}