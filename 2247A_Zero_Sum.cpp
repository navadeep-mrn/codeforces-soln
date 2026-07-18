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
    vector<int> v(n);
    ll s1=0,s2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1)s1++;
        else    s2++;
    }
    if(n%2==1){
        no();
        return;
    }
    if((abs(s1-s2))%4==0){
        yes();
        
    }
    else{
        no();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}