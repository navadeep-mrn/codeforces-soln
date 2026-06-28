#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    int mi=INT_MAX,ma=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mi=min(mi,v[i]);
        ma=max(ma,v[i]);
    }
    cout<<ma-mi<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}