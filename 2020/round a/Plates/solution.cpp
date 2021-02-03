#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>


using namespace std;

int t;
int n;
int k;
int p;
int a[50][30];
int dp[51][1501];

void solve(){
    cin>>n>>k>>p;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
        int sum=0;
        memcpy(dp[i+1],dp[i],sizeof(dp[0]));
        for(int j=0;j<k;j++){
            cin>>a[i][j];
            sum+=a[i][j];
            for (int l=0;l+j+1<=p;l++){
                dp[i+1][l+j+1]=max(dp[i][l]+sum,dp[i+1][l+j+1]);
            }
        }
        
        
    }
    
    cout<<dp[n][p]<<'\n';
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