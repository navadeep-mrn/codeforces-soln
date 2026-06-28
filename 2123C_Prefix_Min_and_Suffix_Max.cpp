#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    int n; cin>>n;
    vector<int> a(n);
 
    for(int i=0;i<n;i++) cin>>a[i];
 
    vector<int> pm(n), sm(n);
 
    pm[0]=a[0];
    for(int i=1;i<n;i++)
        pm[i]=min(pm[i-1],a[i]);
 
    sm[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        sm[i]=max(sm[i+1],a[i]);
 
    string ans;
 
    for(int i=0;i<n;i++){
        if(a[i]==pm[i] || a[i]==sm[i])
            ans.push_back('1');
        else
            ans.push_back('0');
    }
 
    cout<<ans<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--) solve();
}