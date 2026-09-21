#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
const ll MOD = 1e9 + 7;
 
int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    int c=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0)c++;
    }
    if(c==1){
        no();
        return;
    }
    yes();
    int seen=0;
    for(int i=0;i<n;i++){
        if(v[i]==0&&seen==0){
            cout<<'A';
            seen=1;
            continue;
        }
        else if(v[i]==0&&seen==1){
            cout<<'B';
            continue;
        }
        else{
            cout<<'C';
        }
}
    cout<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}