#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
 
//we generate factorials from 3! to <=1e12, no 1!,2! bcoz they r powers of 2
// we check possibility each factorial to be included
// s=sum of all used factorials, the r=remaining number
// pop count of r gives how many powers of 2 are used
// c=no.of factorials used+ no of powers of 2 used
vector<int> fact;
void solve(){
    int n;cin>>n;
    int a=LLONG_MAX;
    // try every possible subset of factorials
    for(int m=0;m<(1<<fact.size());m++){
        int s=0,c=0;
        // add factorials whose bits are set
        for(int i=0;i<fact.size();i++){
            if(m&(1<<i)){
                s+=fact[i];
                c++;
            }
        }
        if(s>n)continue;
        // remaining value is represented by distinct powers of two
        int r=n-s;
        // no of req powers of two= no of set bits
        c+=__builtin_popcountll(r);
        a=min(a,c);
    }
    cout<<a<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int f=1;
    for(int i=1;;i++){
        f*=i;
        if(f>1e12)  break;
        if(i>=3)    fact.push_back(f);
    }
    int t;cin>>t;
    while(t--){
        solve();
    }
    
}