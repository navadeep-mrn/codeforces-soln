#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){ cout<<"YES\n"; }
void no(){ cout<<"NO\n"; }
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int w;
    cin>>w;
 
    if(w>2 && w%2==0){
        yes();
    }
    else{
        no();
    }
}