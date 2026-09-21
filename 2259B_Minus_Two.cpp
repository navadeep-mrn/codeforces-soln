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
    int x,a=0,b1=0,b2=0;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==1)a++;
        else{
            if((x/2)%2==1)b1++;
            else b2++;
        }
    }
    cout<<max({a,b1,b2})<<endl;
}
 
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}