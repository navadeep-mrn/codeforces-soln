#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
 
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;cin>>n;
    int l,r,x;cin>>l>>r>>x;
    int c=0;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    // we check all possibilities of taking each of n
    // m=2,3,4.....2^n-1
    // m is taken in binary form of length n, if n=5, 00010,00011,......11111
    //we track minimum and maximum and check conditions
    for(int m=2;m<(1<<n);m++){
        int a=0;
        int mi=INT_MAX,ma=0;
        for(int i=0;i<n;i++){
            if(m&(1<<i)){
                a+=v[i];
                mi=min(mi,v[i]);
                ma=max(ma,v[i]);
            }
        }
        if(a>=l&&a<=r&&ma-mi>=x){
            c++;
        }
    }
    cout<<c<<endl;
}