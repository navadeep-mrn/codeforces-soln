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
    int a,b;
    cin>>a>>b;
    if(a%2==0&&b%2==1){
        cout<<-1<<endl;;
        return;
    }
    if(a%2==1&&b%2==0){
        if(b%4!=0){
            cout<<-1<<endl;
            return;
        }
        int x=a*(b/2)+2;
        cout<<x<<endl;
        return;
    }
    if(a%2==0&&b%2==0){
        int x=a*(b/2)+2;
        cout<<x<<endl;
        return;
    }
    cout<<a*b+1<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}