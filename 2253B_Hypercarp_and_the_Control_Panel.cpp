#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x)x.begin(),x.end()
#define rall(x)x.rbegin(),x.rend()
void yes(){cout<<"YES"<<endl;}
void no(){cout<<"NO"<<endl;}
ll mod=998244353;
#define int long long
 
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    if(n==1){
        cout<<1<<endl;return;
    }
    if(n==2){
        if(v[0]==v[1]){
            cout<<1<<endl;return;
        }
        else{
            cout<<2<<endl;return;
        }
 
    }
    if(n==3){
        if(v[0]==v[1]&&v[1]==v[2]){
            cout<<1<<endl;return;
        }
        if(v[0]==v[1]||v[1]==v[2]){
            cout<<3<<endl;return;
        }
    }
    vector<pair<int,int>> s;
    int c=0;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1])c++;
        else{
            s.push_back({v[i],c+1});
            c=0;
        }
    }
    s.push_back({v[n-1],c+1});
    for(auto&[i,j]:s){
        //cout<<i<<" "<<j<<endl;
    }
    int x=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i].second>=2&&s[i+1].second>=2){
            x+=2;break;
        }
    }
    if(x==0){
        for(int i=0;i<s.size();i++){
            if(s[i].second<2)continue;
            bool f1=false,f2=false; 
            if(i>0){
                if(i==1)f1=true;
                else    f1=(s[i-2].first!=s[i].first);
            }
            if(i<s.size()-1){
                if(i+2==s.size())f2=true;   
                else     f2=(s[i].first!=s[i+2].first);
            }
            if(f1||f2){
                x=1;break;
            }
        }
    }
    cout<<s.size()+x<<endl;
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}