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
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    // We iterate through all masks from 0 to 2^n - 1.
    // Each mask represents one possible choice of directions for all n rotations.
    // We consider every mask as an n-bit binary number.
    // For example, if n = 5:
    // 00000, 00001, 00010, ..., 11111
    // The ith bit represents the direction of the ith rotation:
    // bit = 1 -> clockwise
    // bit = 0 -> counterclockwise
    //we check from 0,1,10,100,101,110......to 2^n-1 numbers
    //we iterate through each of them, we consider length of binary form as n, if n==5, then it is 00000,00001.....
    //if it is 1, go with clockwise, else counterclockwise
    for(int m=0;m<(1<<n);m++){
        int a=0;
        for(int i=0;i<n;i++){
            if(m&(1<<i)){
                a+=v[i];
 
            }
            else{
                a-=v[i];
            }
        }
        if(a%360==0){
            yes();
            return 0;
        }
    }
    no();
}