#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n,m;cin>>n>>m;
    vector<int> v(m);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v[x%m]++;
    }
    int c=(v[0]>0);
    for(int i=1;i<=m/2;i++){
        if(i==m-i){
            if(v[i])    c++;
            continue;
        }
        if(v[i]==0||v[m-i]==0){
            c+=max(v[i],v[m-i]);
        }
        else if(abs(v[i]-v[m-i])>=2){
            c+=1;
            c+=abs(v[i]-v[m-i])-1;
 
        }
        else{
            c+=1;
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