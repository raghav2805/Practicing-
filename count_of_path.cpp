
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0) 

int main(){
    fast;

    lli n;
    cin>>n;

    lli f[n+1]={0};

    lli arr[n+1]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            arr[i]=-1;
        }
    }

    f[n]=1;

    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=arr[i] && i+j<=n ;j++){
            f[i]+=f[i+j];
        }
    }
    
    cout<<f[0]<<endl;

    return 0;
}
