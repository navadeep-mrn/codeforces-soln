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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> p;
    int r=0;
    for(int i=0;i<n;i++){
        if(v[i]>=i+1)   continue;//we needed 1 based index
        r+=lower_bound(p.begin(),p.end(),v[i])-p.begin();//no of i<a[j]
        p.push_back(i+1);//1 based index
    }
    cout<<r<<endl;
}
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   
 
 
    int t;
    cin>>t;
    while(t--)solve();
}