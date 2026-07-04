#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    int n,k;cin>>n>>k;
    vector<int> v(n);
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<k;i++){
        s+=v[i];
    }
    ll ts=s;
    int a=0,b=k;
    while(b<n){
        s+=v[b];
        s-=v[a];
        ts+=s;
        a++;b++;
    }
    cout<<fixed<<setprecision(6)<<1.0*ts/(n-k+1)<<endl;
 
    
    
}