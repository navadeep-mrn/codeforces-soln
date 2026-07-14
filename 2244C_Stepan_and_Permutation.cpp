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
    int x,y;cin>>x>>y;
    int f=__gcd(x,y);
    vector<int> v(n+1);
    for(int i=1;i<n+1;i++)    cin>>v[i];
    for(int i=1;i<=n;i++){
        if(abs(v[i]-i)%f==0){
            continue;
        }
        else{
            no();
            return;
        }
    }
    yes();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}