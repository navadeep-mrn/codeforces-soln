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
    int x=k/2,y=(k+1)/2;
    x++,y++;
    int re=n-x-y;
    if(x+y>n){
        cout<<-1;
    }
    else{
        for(int i=0;i<x;i++){
            cout<<0;
        }
        for(int i=0;i<y;i++)    cout<<1;
        for(int i=0;i<re;i++){
            if(i%2==0)cout<<0;
            else    cout<<1;
        }
    }
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}