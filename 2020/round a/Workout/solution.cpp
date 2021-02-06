#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>


using namespace std;

int t;
int n;
int k;
int a[500000];
int dp[51][1501];

void solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=1;
    int r=a[n-1]-a[0];
    int ans;
    while(l<=r){
        int m=(r+l)/2;
        int k2=0;
        for(int i=1;i<n;i++){
            int d=a[i]-a[i-1];
            k2+=(d+m-1)/m-1;
        }
        if(k2<=k){
            ans=m;
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    
    cout<<ans<<'\n';
}

int main(){
    cin>>t;
    int j=1;
    while(t){
        cout<<"Case #"<<j<<": ";
        solve();
        t--;
        j++;
    }
    return 0;
}