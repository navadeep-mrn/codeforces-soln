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
    int f=1,l=1;
    cin>>f;
    map<int,int> m;
    for(int i=1;i<n-1;i++){
        cin>>l;
        m[l]++;
    }
    cin>>l;
    if(f==0&&l==0){
        cout<<0<<endl;
        return;
    }
    if(l==0){
        if(m[0]>0){
            cout<<1<<endl;return;
        }
        cout<<-1<<endl;return;
    }
    if(f==0){
        if(m[0]>0){
            cout<<1<<endl;return;
        }
        cout<<-1<<endl;return;
    }
    if(l!=0&&f!=0){
        if(m[0]>1){
            cout<<2<<endl;return;
        }
        cout<<-1<<endl;return;
    }
}
 
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}