#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    ll n,m;cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<m;i++)    cin>>b[i];
    sort(rall(a));sort(all(b));
    ll c=0;
    ll i=0,j=0;
    while(i<n&&j<m){
        if(b[j]==1){
            i++;
            j++;
            continue;
        }
        ll k=b[j];
        ll id=i;
        for(id=i;id<i+k-1&&id < n;id++){
            c+=a[id];
        }
        i=id;
        i++;j++;
    }
    for(ll id=i;id<n;id++){
        c+=a[id];
    }
    cout<<c<<"\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}