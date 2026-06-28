#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){ cout<<"YES"<<"\n"; }
void no(){ cout<<"NO"<<"\n"; }
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    c=min(a,c);
    d=min(b,d);
    if(c-d>=0){
        cout<<"Gellyfish\n";
    }
    else{
        cout<<"Flower\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}