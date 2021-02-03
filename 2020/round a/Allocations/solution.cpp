#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int t;
int n;
int a;
int v[100000];

void solve(){
    cin>>n>>a;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v,v+n);
    int k=0;
    int answer = 0;
    for(int i=0;i<n;i++){
        if(k+v[i]>a)break;
        k+=v[i];
        answer+=1;
    }
    cout<<answer<<'\n';
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
