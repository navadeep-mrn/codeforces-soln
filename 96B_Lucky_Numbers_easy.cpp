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
    int a=LLONG_MAX;
    //we compute each possible from length 2 to 9
    //no of sets in the number should be half the length
    //we construct decimal rep, but if bit is 1 then use 7 else 4
    for(int i=2;i<=10;i+=2){
        for(int m=0;m<(1<<i);m++){
            if(__builtin_popcountll(m)!=i/2){
                continue;
            }
            int k=0;
            for(int p=i-1;p>=0;p--){
                k*=10;
                if(m&(1<<p)){
                    k+=7;
                }
                else{
                    k+=4;
                }
            }
            if(k>=n)    a=min(a,k);
        }
    }
    cout<<a<<endl;
}