#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    ll n;cin>>n;
    vector<ll>a(n),b(n);
    ll m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=max(m,a[i]);
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll s=0;
    bool done=true;
    for(int i=0;i<n;i++){
        if(a[i]>=b[i]){
            s+=a[i];
            swap(a[i],b[i]);
        }
        else{
            if(a[i]==m&&done){
                s+=a[i];
                done=false;
                swap(a[i],b[i]);
            }
            else{
                s+=b[i];
            }
        }
    }
    m=*max_element(all(a));
    cout<<m+s<<endl;
    
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}