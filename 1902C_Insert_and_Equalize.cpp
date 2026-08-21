#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
const ll MOD = 1e9 + 7;
 
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int gd=0,d=0;
    sort(all(v));
    
    for(int i=1;i<n;i++){
        d=v[i]-v[i-1];
        gd=__gcd(gd,d);
    }
    int mx=v[n-1];
    int res=mx;
    int j=n-1;
    // After getting gcd, possible positions are:
    // mx, mx-gd, mx-2*gd, ...
    // Find the first position which is not already present.
    while(true){
        while(j>=0&&v[j]>res){
            j--;
        }
        // res is not present in the array, so insert it
        if(j<0||v[j]!=res){
            break;
        }
        // res already exists, try the next position
        res-=gd;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    // Operations needed for all n+1 elements to reach mx
    int ans=(mx*(n+1)-(sum+res))/gd;
    cout<<ans<<endl;
}
 
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}