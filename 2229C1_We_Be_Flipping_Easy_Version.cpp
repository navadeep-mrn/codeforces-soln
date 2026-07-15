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
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<pair<int,int>> sg;
    int c;
    if(v[0]>0){
        c=1;
    }
    else{
        c=-1;
    }
    int s=-1;
    for(int i=1;i<n;i++){
        
        if(v[i]>0){
            s=1;
        }
        else{
            s=-1;
        }
        if(s!=c){
            sg.push_back({c,i});
            c=s;
        }
    }
    if(s==-1){
        
    }
    else if(sg.size()!=0||s==1)    sg.push_back({s,n});
        
    reverse(all(sg));
    cout<<sg.size()<<endl;
    for(auto i:sg){
        
        cout<<i.second<<" ";
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