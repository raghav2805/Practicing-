
#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int
int mod = 1e9 + 7;

int main(){
    fastio;

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int b=0,s=0,ans=0;

    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            s=i;
        }

        else{
            ans+=arr[s]-arr[b];
            b=s=i;
        }
        
    }

    ans+=arr[s]-arr[b];
    cout<<ans;

    return 0;
}
