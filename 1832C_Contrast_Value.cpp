#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n;cin>>n;
    vector<int> vt(n),v;
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    v.push_back(vt[0]);
    for(int i=1;i<n;i++){
        if(vt[i]!=vt[i-1]){
            v.push_back(vt[i]);
        }
    }
    if(v.size()==1){
        cout<<"1\n";
        return;
    }
    int c=2;
    vector<int> dir;
    for(int i=1;i<v.size();i++){
        dir.push_back(v[i]-v[i-1]);
    }
    int m=dir.size();
    for(int i=1;i<m;i++){
        if((dir[i-1]^dir[i])<0){
            c++;
        }
    }
    cout<<c<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}