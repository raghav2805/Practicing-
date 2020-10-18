
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0) 

int main(){
    fast;

    lli n;
    cin>>n;

    int f[n+1];

    for(int i=0;i<=n;i++){
        f[i]=-1;
    }

    lli arr[n+1]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }

    f[n]=0;

    for(int i=n-1;i>=0;i--){
        if(arr[i] > 0){
            int mnn=INT_MAX;

            for(int j=1;j<=arr[i] && i+j<=n ;j++){
                if(f[i+j]!=-1){
                    mnn=min(mnn,f[i+j]);
                }
            }

            if(mnn!=INT_MAX){
                f[i]=mnn+1;
            }
            else{
                f[i]=-1;
            }

        }  
    }

    cout<<f[0]<<endl;

    return 0;
}
