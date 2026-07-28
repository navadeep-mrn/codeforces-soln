#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
#define int long long
 
vector<int> v(1000001);
 
void solve(){
    int n;cin>>n;
    if(v[n])    yes();
    else no();
}
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   
    for(int i=2;i<=10000;i++){
        int c=i*i*i;
        int c1=(c-1)/(i-1);
        while(c1<=1e6){
            v[c1]=1;
            c*=i;
            c1=(c-1)/(i-1);
        }
    }
 
 
    int t;
    cin>>t;
    while(t--)solve();
}