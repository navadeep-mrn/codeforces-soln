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
    vector<int> a,b;
    int ma=INT_MAX,mb=INT_MIN;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(i%2==0){
            a.push_back(x);
            ma=min(ma,x);
        }
        else{
            b.push_back(x);
            mb=max(mb,x);
        }
    }
    if(n%2==1){
        no();return;
    }
    if(ma-mb>=2){
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