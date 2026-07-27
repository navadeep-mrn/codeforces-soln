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
    vector<int> v(n);
    set<int>df;
    int ve=0,vo=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i%2==0){
            ve+=v[i];
        }
        else{
            vo+=v[i];
        }
        df.insert(ve-vo);
        //cout<<df[i]<<endl;
    }
    df.insert(0);
    if(df.size()<n+1){
        yes();
    }
    else no();
       
}
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}