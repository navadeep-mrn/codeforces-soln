#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
int check(){
    int n,k;cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> temp;
   
    int c=0;
    for(int i=0;i<n;i++){
        ll t=0;
        c=i;
        temp.push_back(v[i]);
        sort(rall(temp));
        for(int j=0;j<=i;j+=2){
            if(t+temp[j]<=k){
                t=t+temp[j];   
            }
            else{
                return c;
            }
        }
        
        //cout<<i<<" "<<t<<endl;
    }
    return c+1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cout<<check();
    
}