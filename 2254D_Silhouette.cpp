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
    int n;cin>>n;
    vector<int> v(n),co(n);
    for(int i=0;i<n;i++){cin>>v[i]; co[i]=v[i];}
    sort(all(v));
    if(v[0]!=0){
        cout<<-1<<"\n";
        return;
    }
    map<int,int> m;
    int lv=0;
    bool pl=false;
    bool ok=true;
    int l=0;
    for(int i=1;i<=n;i++){
        if(i<n&&v[i]==v[i-1]){
            l++;
            continue;
        }
        int c=l+1;
        int ho=v[i-1];
        int ee;
        if(i<n){
            int diff=v[i]-ho;
            if(diff<=0||diff%c!=0){ok=false;break;}
            ee=diff/c;
        } else {
            if(pl){
                ee=lv+1;
            }
            else{
                ee=1;
            }
        }
        if(pl&&ee<=lv){ok=false;break;}
        m[ho]=ee;
        lv=ee;
        pl=true;
        l=0;
    }
    if(!ok){cout<<-1<<"\n";return;}
    for(int i=0;i<n;i++) cout<<m[co[i]]<<' ';
    cout<<"\n";
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
}