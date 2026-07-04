#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    map<int,vector<int>> m;
    int prev=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v[i]=x+prev;
        prev+=x;
        m[v[i]].push_back(i);
    }
    if(prev<k){
        cout<<-1<<endl;
        return;
    }
    if(prev==k){
        cout<<0<<"\n";
        return;
    }
    int mini=0;
    for(int i=0;i<prev;i++){
        if(m.count(k+i)&&m.count(i)){
            int r=m[k+i].back();
            int l=m[i].front();
            mini=max(mini,r-l);
            if(l==0&&i==0)    mini++;
            //cout<<l<<" "<<r<<" "<<mini<<endl;
        }
    }
    cout<<n-mini<<endl;
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}