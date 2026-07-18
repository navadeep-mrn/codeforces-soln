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
    vector<int> a(n),b(n);
    int s1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1+=a[i];
    }
    int s2=0;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==0) s2++;
    }
    bool he=true;
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            he=false;
        }
        if(a[i]==1&&b[i]==0){
            c++;
        }
    }
    if(he){
        cout<<0<<endl;
        return;
    }   
    if(s2==0){
        cout<<-1<<endl;
        return;
    }
    if(s1==0){
        cout<<-1<<endl;
        return;
    }
    if(c%2==0){
        
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}