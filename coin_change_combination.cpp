
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int

int main(){
    fast;

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int amt;
    cin>>amt;

    int f[amt+1];

    for(int i=0;i<=amt;i++){
        f[i]=0;
    }

    f[0]=1;

    for(int j=0;j<n;j++){
        for(int i=arr[j];i<=amt;i++){
                f[i]+=f[i-arr[j]];
            
        }
    }

    cout<<f[amt]<<endl;

    return 0;
}
