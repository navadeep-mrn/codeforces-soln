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
    int x=0;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        if(i>0&&v[i].first!=v[i-1].first){
            x++;
        }
        v[i].second=i+1;
    }
    if(x==0){
        no();return;
    }
    yes();
    sort(all(v));
    x=v[0].first;
    int y;
    int k;
    for(int i=0;i<n;i++){
        if(v[i].first!=x){
            y=v[i].second;
            k=i;
            break;
        }
    }
    //cout<<y<<endl;
    for(int j=k;j<n;j++){
        cout<<v[0].second<<" "<<v[j].second<<"\n";
    }
    for(int i=1;i<k;i++){
        cout<<y<<" "<<v[i].second<<"\n";
    }
 
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}