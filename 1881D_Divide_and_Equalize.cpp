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
    vector<int> v(n);
    map<ll,ll> m;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        ll j=2;
        
        while(j*j<=x){
            while(x%j==0){
                m[j]++;
                x=x/j;
            }
            j++;
        }
        if(x>1) m[x]++;
        
    }
    for(auto& [i,j]:m){
        //cout<<i<<" "<<j<<endl;
        if(j%n!=0){
            cout<<"NO"<<endl;
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