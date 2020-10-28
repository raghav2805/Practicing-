
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

    int dp[n];

    dp[0]=0;
    int min=0;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[min]){
            dp[i]=arr[i]-arr[min];
        }
        else{
            min=i;
            dp[min]=0;
        }
    }

    cout<<*max_element(dp,dp+n);

    return 0;
}
