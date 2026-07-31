#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
#define int long long
 
 
void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    int a=LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i];
        a=min(a,v[i]);
    }
    if(k>2){
        cout<<0<<endl;return;
    }
    sort(all(v));
    if(k==1){
        
        for(int i=1;i<n;i++){
            a=min(a,v[i]-v[i-1]);
        }
        cout<<a<<endl;
 
    }
    else{
        
        
        for(int i=1;i<n;i++){
            a=min(a,v[i]-v[i-1]);
        }
        vector<int> dif;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                dif.push_back(abs(v[i]-v[j]));
            }
        }
        sort(all(dif));
        for(int i=0;i<n;i++){
            auto it=lower_bound(all(dif),v[i]);
            if(it!=dif.end()){
                a=min(a,abs(*it-v[i]));
            }
            if(it!=dif.begin()){
                --it;
                a=min(a,abs(*it-v[i]));
            }
        }
        cout<<a<<endl;
    }
    
 
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
    while(t--)solve();
}